/* Firmware entry: 0x4817516c */

int FUN_ram_4817516c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return -0x4f80;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_ram_4818126a(param_2,1,param_1 + 0x34,param_3,param_4);
    if (iVar1 == -0xe) {
      iVar1 = -0x4d00;
    }
    return iVar1;
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  iVar1 = (uVar3 >> 3) + 1;
  iVar2 = FUN_ram_48181214(param_2,iVar1);
  if ((((iVar2 == 0) && (iVar2 = FUN_ram_4818019e(param_2,(iVar1 * 8 - uVar3) + -1), iVar2 == 0)) &&
      (iVar2 = FUN_ram_4817ffcc(param_2,uVar3,1), iVar2 == 0)) &&
     (((iVar2 = FUN_ram_4817ffcc(param_2,0,0), iVar2 == 0 &&
       (iVar2 = FUN_ram_4817ffcc(param_2,1,0), iVar2 == 0)) && (uVar3 == 0xfe)))) {
    iVar1 = FUN_ram_4817ffcc(param_2,2,0);
    return iVar1;
  }
  return iVar2;
}


