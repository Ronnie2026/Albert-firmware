/* Firmware entry: 0x4804e2a8 */

char * FUN_ram_4804e2a8(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x1e < ((int)*(short *)(param_1 + 2) - 0x96U & 0xffff)) {
    return "preventiveNegativeMinNm";
  }
  if (((int)*(short *)(param_1 + 4) < (int)*(short *)(param_1 + 2)) ||
     (0xb4 < *(short *)(param_1 + 4))) {
    return "preventiveNegativeMaxNm";
  }
  if (0x1e < ((int)*(short *)(param_1 + 6) - 0x96U & 0xffff)) {
    return "preventivePositiveMinNm";
  }
  if (((int)*(short *)(param_1 + 8) < (int)*(short *)(param_1 + 6)) ||
     (0xb4 < *(short *)(param_1 + 8))) {
    return "preventivePositiveMaxNm";
  }
  if (0x46 < ((int)*(short *)(param_1 + 10) - 0xb4U & 0xffff)) {
    return "correctiveNegativeMinNm";
  }
  if (((int)*(short *)(param_1 + 0xc) < (int)*(short *)(param_1 + 10)) ||
     (0xfa < *(short *)(param_1 + 0xc))) {
    return "correctiveNegativeMaxNm";
  }
  if (0x46 < ((int)*(short *)(param_1 + 0xe) - 0xb4U & 0xffff)) {
    return "correctivePositiveMinNm";
  }
  if (((int)*(short *)(param_1 + 0x10) < (int)*(short *)(param_1 + 0xe)) ||
     (0xfa < *(short *)(param_1 + 0x10))) {
    return "correctivePositiveMaxNm";
  }
  if (((ushort)(*(ushort *)(param_1 + 0x14) - 1) < 9) || (0xff < *(ushort *)(param_1 + 0x14))) {
    return "correctiveNegativeFrames";
  }
  if (((ushort)(*(ushort *)(param_1 + 0x12) - 1) < 9) || (0xff < *(ushort *)(param_1 + 0x12))) {
    return "correctivePositiveFrames";
  }
  if (*(uint *)(param_1 + 0x18) < 100) {
    return "activityMinSec";
  }
  if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0x18)) {
    return "activityMaxSec";
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      return "restMinSec";
    }
  }
  else {
    if (uVar1 < 100) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return "restMinSec";
    }
    if (*(uint *)(param_1 + 0x24) < uVar1) {
      return "restMaxSec";
    }
  }
  if (*(uint *)(param_1 + 0x30) < 100) {
    return "correctiveSendMinSec";
  }
  if (*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x30)) {
    return "correctiveSendMaxSec";
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == 0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
LAB_ram_4804e428:
      if (*(int *)(param_1 + 0x44) - 100U < 0x76d) {
        return (char *)0x0;
      }
      return "dasFreshTimeoutMs";
    }
  }
  else if (99 < uVar1) {
    if (*(uint *)(param_1 + 0x3c) < uVar1) {
      return "correctivePauseMaxSec";
    }
    goto LAB_ram_4804e428;
  }
  return "correctivePauseMinSec";
}


