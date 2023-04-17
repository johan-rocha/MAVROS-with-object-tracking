# 1 - ROS BASIC:

## Comandos:

### primários:

nó:
* roscore
* rosnode
* rosrun
tópico:
* rostopic
    *  em rostopic pub -r n (-r significa o parametro de  repeticoes e n, quantas vezes por segundo)

mensagem:
* rosmsg

serviço:
* rosservice: serviços
* rossrv: 
    * serviços com mais detalhes
    (trabalha com o tipo de serviço, não com o serviço diretamente)
* rosparam

pacotes:
* rospack
* roscd
* rosls
	
### secundários:
* primário + <tab> <tab>
(é importante verificar os comando secundários e/ou parametros utilizando <tab> <tab>)

### simulador:
* turtlesim

## Definições Básicas:
* nó
* nó master
* tópico
* serviço
* parametro
* pacote
    * agrupamentos de código fonte que descrevem nós, serviços e mensagens, todos relacionados entre si

## Ferramentas:
* rqt

## Como Criar os Próprios Pacotes?
1. criando a workspace:
    * é preciso criar uma workspace (onde criamos os pacotes)
        * em /home, crie uma pasta chamada catkin_ws, dentro dela, uma pasta chamada src; após isso, dê o comando `catkin_make` ou `catkin build` dentro da **catkin_ws**, e pronto. 

> obs: pode usar uma pasta de nome diferente de catkin_ws!!

> obs: são criadas 3 pastas: **devel**, src e build;

2. criando o pacote:
    mudar para a pasta src e executar o comando:
    catkin_create_pkg <nome_do_pacote> <depend1> <depend2> ...
    as dependencias (pacotes) basicas são:
    -std_msgs 
    -roscpp
    -rospy

3. edite o package.xml, lá contém as informações do seu pacote;
    * o CMakeLists.txt será usado para listar os nós, que vamos aprender na próxima etapa:

4. criando um nó:
    * crie uma pasta chamada scripts dentro da pasta do seu pacote
    * dentro de scripts, crie um programa em python, que será seu nó
    * temos que informar ao pacote a respeito do nó com o CMakeLists.txt, inserindo no final do arquivo:
        * para python:
        `catkin_install_python(PROGRAMS scripts/nome_do_programa.py
        DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
        )`


5. para atualizar o pacote no ros, execute `catkin_make`(OU `catkin build`, caso o utilize) na catkin_ws novamente.

6. para que o rosrun reconheça o pacote, execute `source devel/setup.bash`

***

# 2 - CONFIGURAÇÃO GAZEBO-ARDUPILOT

## Requisitos (alguns estão incluidos no tutorial de configuração do ambiente):
1. Ardupilot Mavproxy: https://ardupilot.org/mavproxy/docs/getting_started/download_and_installation.html
2. SITL: https://ardupilot.org/dev/docs/setting-up-sitl-on-linux.html

## Pendências:
* pip3
* git

## Configuração do ambiente de compilação:

* > https://ardupilot.org/dev/docs/building-setup-linux.html#building-setup-linux
    * >obs: nessa etapa também é configurado o mavproxy e o SITL

## Utilização do Gazebo + Plugin:
* https://www.youtube.com/watch?v=m7hPyJJmWmU
* https://github.com/Intelligent-Quads/iq_tutorials/blob/master/docs/installing_gazebo_arduplugin.md
    * obs: Na ultima etapa de execução do SITL, é importante, caso tenha executado o primeiro tutorial de execução automática do ambiente, alterar o caminho de **sim_vehicle.py** para **<começo do caminho>/Tools/autotest/sim_vehicle.py**
> (Alternativo) https://ardupilot.org/dev/docs/sitl-with-gazebo.html#sitl-with-gazebo


### executar:
    $ gazebo --verbose ~/ardupilot_gazebo/worlds/iris_arducopter_runway.world

também:

    $ /home/noeticros/ardupilot/Tools/autotest/sim_vehicle.py -v ArduCopter -f gazebo-iris --console

***
# 3 - ROS WITH MAVPROXY AND SITL

> guia: https://github.com/Intelligent-Quads/iq_tutorials/blob/master/docs/installing_ros.md

## Requisitos:
* `catkin build`: uma versão mais sofisticada do que o `catkin_make`
    * > https://catkin-tools.readthedocs.io/en/latest/installing.html
* 	devem ser alterados de python(como está no tutorial) para python3
    * python3-wstool
    * python3-rosinstall-generator
    * python3 catkin tools
    * rosdep (a instalação desse não está contida no tutorial)
    * geographiclib

# 4 - RUN MAVROS IN GAZEBO
> GUIA: https://github.com/Intelligent-Quads/iq_tutorials/blob/master/docs/ros_intro.md

## Requisitos:

reinstalar o gazebo com plugins:

    $ sudo apt-get install ros-noetic-gazebo-ros-pkgs ros-noetic-gazebo-ros-control ros-noetic-gazebo-plugins

No último guia, fizemos a configuração dos mundos e modelos de drones por meio do repositório do Intelligent Quads, dessa forma, fica mais fácil também executar o gazebo com o seguinte código:

    $ roslaunch iq_sim runway.launch

No guia é simplificado o run do SITL, copiando um arquivo de script com o código.
Depois de configurado, é possível executar acessando a home e usando:

    $ ~/startsitl.sh

Para executar o MAVROS para estimativas mais precisas por meio do MAVLink:

    roslaunch iq_sim apm.launch


