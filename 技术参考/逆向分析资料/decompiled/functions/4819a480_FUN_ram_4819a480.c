/* Firmware entry: 0x4819a480 */

int FUN_ram_4819a480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_24 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_481a2c6a(param_1,param_3,auStack_24);
  if ((uVar1 != 0) && (iVar2 = FUN_ram_4819a36a(param_1), iVar2 != 0)) {
    iVar3 = FUN_ram_4800de0e(param_1,param_2,auStack_24[0],0x1b6);
    if (-1 < iVar3) {
      if (((*(uint *)(iVar2 + 100) & 1) == 0) && ((*(ushort *)(iVar2 + 0xc) & 0x200) == 0)) {
        FUN_ram_4ff21846(*(undefined4 *)(iVar2 + 0x58));
      }
      *(code **)(iVar2 + 0x24) = FUN_ram_4819ae48;
      *(undefined1 **)(iVar2 + 0x28) = &LAB_ram_4819ae82;
      *(undefined1 **)(iVar2 + 0x2c) = &LAB_ram_4819aedc;
      *(short *)(iVar2 + 0xc) = (short)uVar1;
      *(short *)(iVar2 + 0xe) = (short)iVar3;
      *(int *)(iVar2 + 0x20) = iVar2;
      *(undefined1 **)(iVar2 + 0x30) = &LAB_ram_4819af18;
      if ((uVar1 & 0x100) != 0) {
        thunk_FUN_ram_4819b02c(param_1,iVar2,0,2);
      }
      if ((*(uint *)(iVar2 + 100) & 1) != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar2;
      }
      if ((*(ushort *)(iVar2 + 0xc) & 0x200) != 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return iVar2;
      }
      FUN_ram_4ff21966(*(undefined4 *)(iVar2 + 0x58));
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar2;
    }
    FUN_ram_4819a34a();
    *(undefined2 *)(iVar2 + 0xc) = 0;
    FUN_ram_4ff217e8(*(undefined4 *)(iVar2 + 0x58));
    FUN_ram_4819a35a();
  }
  return 0;
}


