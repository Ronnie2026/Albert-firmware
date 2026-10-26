/* Firmware entry: 0x48118312 */

void FUN_ram_48118312(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((char)param_1[10] != '\0') && (param_1[3] != 0)) &&
     (iVar3 = param_1[3] + -1 + (int)param_1, *(char *)(iVar3 + 0x1c) == '\0')) {
    if (*(char *)(iVar3 + 0x10) == '\0') {
      uVar1 = param_1[2];
      if (((uint)param_1[1] < uVar1) || (param_1[1] - uVar1 < 2)) goto LAB_ram_48118344;
      param_4 = 0x2c;
      *(undefined1 *)(*param_1 + uVar1) = 0x2c;
      iVar3 = param_1[2];
      param_1[2] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
      iVar3 = param_1[3] + -1 + (int)param_1;
    }
    *(undefined1 *)(iVar3 + 0x10) = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uVar1 = FUN_ram_4819ad74(&uStack_30,0x20,&DAT_ram_481c48f4,param_4,param_2,0);
    if ((char)param_1[10] != '\0') {
      uVar2 = param_1[2];
      if ((uVar2 <= (uint)param_1[1]) && (uVar1 < param_1[1] - uVar2)) {
        FUN_ram_4ff45158(*param_1 + uVar2,&uStack_30);
        iVar3 = param_1[2];
        param_1[2] = uVar1 + iVar3;
        *(undefined1 *)(*param_1 + uVar1 + iVar3) = 0;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
    }
  }
LAB_ram_48118344:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


