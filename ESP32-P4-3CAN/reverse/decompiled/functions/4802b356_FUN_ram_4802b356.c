/* Firmware entry: 0x4802b356 */

undefined4 * FUN_ram_4802b356(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = param_3;
  if (param_3 <= param_4) {
    uVar1 = param_4;
    param_4 = param_3;
  }
  *param_1 = 0;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x7f;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_ram_4802a7f4(param_1,&DAT_ram_481df390,0);
  if (*(char *)((int)param_2 + 0xf) < '\0') {
    uVar2 = *(byte *)((int)param_2 + 0xf) & 0x7f;
    if (param_4 < uVar2) {
      if (uVar2 < uVar1) {
        uVar1 = uVar2;
      }
      goto LAB_ram_4802b3c2;
    }
  }
  else {
    uVar2 = param_2[2];
    if (param_4 < uVar2) {
      if (uVar2 < uVar1) {
        uVar1 = uVar2;
      }
      param_2 = (undefined4 *)*param_2;
LAB_ram_4802b3c2:
      FUN_ram_4802a7f4(param_1,(int)param_2 + param_4,uVar1 - param_4);
      return param_1;
    }
  }
  return param_1;
}


