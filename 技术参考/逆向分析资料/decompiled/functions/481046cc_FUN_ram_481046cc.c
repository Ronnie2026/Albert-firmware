/* Firmware entry: 0x481046cc */

void FUN_ram_481046cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_14 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff3d9a8();
  fence();
  *(undefined4 *)(param_1 + 0x9810) = uVar1;
  if (*(int *)(param_1 + 0x978c) != 0) {
    aiStack_14[0] = 0;
    iVar2 = FUN_ram_4ff3b4aa(*(int *)(param_1 + 0x978c),aiStack_14,0);
    if ((iVar2 == 1) && (aiStack_14[0] != 0)) {
      FUN_ram_480e8070(param_1);
      FUN_ram_4ff3afa2(*(undefined4 *)(aiStack_14[0] + 0x18c),0,0,0);
      return;
    }
  }
  return;
}


