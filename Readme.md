# ROS BASIC:

## Comandos:

### primários:
	nó:
	-roscore
	-rosnode
	-rosrun
	tópico:
	-rostopic
		-- em rostopic pub -r n (-r significa o parametro de  repeticoes e n, quantas vezes por segundo)
	mensagem:
	-rosmsg
	serviço:
	-rosservice: serviços
	-rossrv: serviços com mais detalhes(trabalha com o tipo de serviço, não com o serviço diretamente)
	-rosparam
	pacotes:
	-rospack
	-roscd
	-rosls
	
### secundários:
	primário + <tab> <tab>
	(é importante verificar os comando secundários e/ou parametros utilizando <tab> <tab>)

### simulador:
	turtlesim

## Definições Básicas:
	-nó
	-nó master
	-tópico
	-serviço
	-parametro
	-pacote:agrupamentos de código fonte que descrevem nós, serviços e mensagens, todos relacionados entre si

## Ferramentas:
	-rqt

## Como Criar os Próprios Pacotes?
	<strong>1º- criando a workspace</strong>
	é preciso criar uma workspace (onde criamoss os pacotes)
	em /home, crie uma pasta chamada catkin_ws, dentro dela, uma pasta chamada src; após isso, dê o comando catkin_make dentro da catkin_ws, e pronto. obs: pode usar uma pasta de nome diferente de catkin_ws!!

	obs:são criadas 3 pastas: **devel**, src e build;

	**2º - criando o pacote**
		mudar para a pasta src e executar o comando:
		catkin_create_pkg <nome_do_pacote> <depend1> <depend2> ...
		as dependencias (pacotes) basicas são:
		-std_msgs 
		-roscpp
		-rospy

	**3º**
		-edite o package.xml, lá contém as informações do seu pacote;
		- o CMakeLists.txt será usado para listar os nós, que vamos aprender na próxima etapa:

	**4º - criando um nó:**
		-crie uma pasta chamada scripts dentro da pasta do seu pacote
		-dentro de scripts, crie um programa em python, que será seu nó
		-temos que informar ao pacote a respeito do nó com o CMakeLists.txt, inserindo no final do arquivo:
			para python:
			catkin_install_python(PROGRAMS scripts/nome_do_programa.py
			DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
			)


	**5º**
		-para atualizar o pacote no ros, execute catkin_make(OU catkin build, caso o utilize) na catkin_ws novamente.

	**6º**
		-para que o rosrun reconheça o pacote, execute 'source devel/setup.bash'
