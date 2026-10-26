/* Firmware entry: 0x4815a0b6 */

undefined4 FUN_ram_4815a0b6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_14 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815d7e0(auStack_14);
  iVar2 = DAT_ram_4ff6d418;
  do {
    if (iVar2 == 0) {
      uVar1 = 0x1107;
LAB_ram_4815a0ea:
      FUN_ram_4815d7f0(auStack_14);
      return uVar1;
    }
    if (param_1 == *(int *)(iVar2 + 0xc)) {
      uVar1 = (**(code **)(**(int **)(iVar2 + 8) + 0x20))(*(int **)(iVar2 + 8),param_2);
      goto LAB_ram_4815a0ea;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


