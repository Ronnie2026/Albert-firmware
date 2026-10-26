/* Firmware entry: 0x48199fd0 */

undefined4 FUN_ram_48199fd0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
LAB_ram_4819a018:
    uVar2 = 0;
  }
  else {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x28) == 0)) {
      FUN_ram_4819a44c();
    }
    if ((*(uint *)(param_2 + 100) & 1) == 0) {
      if ((*(ushort *)(param_2 + 0xc) & 0x200) == 0) {
        FUN_ram_4ff21846(*(undefined4 *)(param_2 + 0x58));
        goto LAB_ram_4819a002;
      }
    }
    else {
LAB_ram_4819a002:
      if (*(short *)(param_2 + 0xc) == 0) {
        if ((*(uint *)(param_2 + 100) & 1) == 0) {
          FUN_ram_4ff21966(*(undefined4 *)(param_2 + 0x58));
        }
        goto LAB_ram_4819a018;
      }
    }
    uVar2 = FUN_ram_4819a0a6(param_1,param_2);
    if ((*(code **)(param_2 + 0x30) != (code *)0x0) &&
       (iVar1 = (**(code **)(param_2 + 0x30))(param_1,*(undefined4 *)(param_2 + 0x20)), iVar1 < 0))
    {
      uVar2 = 0xffffffff;
    }
    if ((*(ushort *)(param_2 + 0xc) & 0x80) != 0) {
      FUN_ram_4ff450c2(param_1,*(undefined4 *)(param_2 + 0x10));
    }
    if (*(int *)(param_2 + 0x34) != 0) {
      if (*(int *)(param_2 + 0x34) != param_2 + 0x44) {
        FUN_ram_4ff450c2(param_1);
      }
      *(undefined4 *)(param_2 + 0x34) = 0;
    }
    if (*(int *)(param_2 + 0x48) != 0) {
      FUN_ram_4ff450c2(param_1);
      *(undefined4 *)(param_2 + 0x48) = 0;
    }
    FUN_ram_4819a34a();
    *(undefined2 *)(param_2 + 0xc) = 0;
    if ((*(uint *)(param_2 + 100) & 1) == 0) {
      FUN_ram_4ff21966(*(undefined4 *)(param_2 + 0x58));
    }
    FUN_ram_4ff217e8(*(undefined4 *)(param_2 + 0x58));
    FUN_ram_4819a35a();
  }
  return uVar2;
}


