/* Firmware entry: 0x4815a218 */

undefined4 FUN_ram_4815a218(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auStack_24 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815d7e0(auStack_24);
  iVar2 = DAT_ram_4ff6d418;
  do {
    if (iVar2 == 0) {
      uVar1 = 0x1107;
LAB_ram_4815a258:
      FUN_ram_4815d7f0(auStack_24);
      return uVar1;
    }
    if (param_1 == *(int *)(iVar2 + 0xc)) {
      pcVar3 = *(code **)(**(int **)(iVar2 + 8) + 0xc);
      uVar1 = (*pcVar3)(*(int **)(iVar2 + 8),param_2,param_3,param_4,*(int *)(iVar2 + 0xc),pcVar3);
      goto LAB_ram_4815a258;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


