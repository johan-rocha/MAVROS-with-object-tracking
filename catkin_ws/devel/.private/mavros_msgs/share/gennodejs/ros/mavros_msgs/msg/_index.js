
"use strict";

let RTKBaseline = require('./RTKBaseline.js');
let HilSensor = require('./HilSensor.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let ParamValue = require('./ParamValue.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let GPSINPUT = require('./GPSINPUT.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let FileEntry = require('./FileEntry.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let HilControls = require('./HilControls.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let CellularStatus = require('./CellularStatus.js');
let RadioStatus = require('./RadioStatus.js');
let Param = require('./Param.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let StatusText = require('./StatusText.js');
let Thrust = require('./Thrust.js');
let WaypointList = require('./WaypointList.js');
let LogData = require('./LogData.js');
let VehicleInfo = require('./VehicleInfo.js');
let Altitude = require('./Altitude.js');
let Trajectory = require('./Trajectory.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let MountControl = require('./MountControl.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let ActuatorControl = require('./ActuatorControl.js');
let DebugValue = require('./DebugValue.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let RTCM = require('./RTCM.js');
let HomePosition = require('./HomePosition.js');
let ManualControl = require('./ManualControl.js');
let Vibration = require('./Vibration.js');
let LandingTarget = require('./LandingTarget.js');
let TerrainReport = require('./TerrainReport.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let Mavlink = require('./Mavlink.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let PositionTarget = require('./PositionTarget.js');
let BatteryStatus = require('./BatteryStatus.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let Waypoint = require('./Waypoint.js');
let HilGPS = require('./HilGPS.js');
let GPSRAW = require('./GPSRAW.js');
let ExtendedState = require('./ExtendedState.js');
let LogEntry = require('./LogEntry.js');
let ESCStatus = require('./ESCStatus.js');
let GPSRTK = require('./GPSRTK.js');
let WaypointReached = require('./WaypointReached.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let Tunnel = require('./Tunnel.js');
let RCIn = require('./RCIn.js');
let RCOut = require('./RCOut.js');
let ESCInfo = require('./ESCInfo.js');
let State = require('./State.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let CommandCode = require('./CommandCode.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let VFR_HUD = require('./VFR_HUD.js');

module.exports = {
  RTKBaseline: RTKBaseline,
  HilSensor: HilSensor,
  OpticalFlowRad: OpticalFlowRad,
  OverrideRCIn: OverrideRCIn,
  CameraImageCaptured: CameraImageCaptured,
  ESCInfoItem: ESCInfoItem,
  ParamValue: ParamValue,
  MagnetometerReporter: MagnetometerReporter,
  GPSINPUT: GPSINPUT,
  CompanionProcessStatus: CompanionProcessStatus,
  FileEntry: FileEntry,
  HilStateQuaternion: HilStateQuaternion,
  HilControls: HilControls,
  OnboardComputerStatus: OnboardComputerStatus,
  CellularStatus: CellularStatus,
  RadioStatus: RadioStatus,
  Param: Param,
  CamIMUStamp: CamIMUStamp,
  TimesyncStatus: TimesyncStatus,
  StatusText: StatusText,
  Thrust: Thrust,
  WaypointList: WaypointList,
  LogData: LogData,
  VehicleInfo: VehicleInfo,
  Altitude: Altitude,
  Trajectory: Trajectory,
  AttitudeTarget: AttitudeTarget,
  MountControl: MountControl,
  EstimatorStatus: EstimatorStatus,
  ActuatorControl: ActuatorControl,
  DebugValue: DebugValue,
  ADSBVehicle: ADSBVehicle,
  RTCM: RTCM,
  HomePosition: HomePosition,
  ManualControl: ManualControl,
  Vibration: Vibration,
  LandingTarget: LandingTarget,
  TerrainReport: TerrainReport,
  ESCTelemetry: ESCTelemetry,
  Mavlink: Mavlink,
  ESCStatusItem: ESCStatusItem,
  PositionTarget: PositionTarget,
  BatteryStatus: BatteryStatus,
  NavControllerOutput: NavControllerOutput,
  ESCTelemetryItem: ESCTelemetryItem,
  GlobalPositionTarget: GlobalPositionTarget,
  Waypoint: Waypoint,
  HilGPS: HilGPS,
  GPSRAW: GPSRAW,
  ExtendedState: ExtendedState,
  LogEntry: LogEntry,
  ESCStatus: ESCStatus,
  GPSRTK: GPSRTK,
  WaypointReached: WaypointReached,
  WheelOdomStamped: WheelOdomStamped,
  Tunnel: Tunnel,
  RCIn: RCIn,
  RCOut: RCOut,
  ESCInfo: ESCInfo,
  State: State,
  HilActuatorControls: HilActuatorControls,
  CommandCode: CommandCode,
  PlayTuneV2: PlayTuneV2,
  VFR_HUD: VFR_HUD,
};
