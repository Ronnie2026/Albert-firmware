/* Firmware entry: 0x481490ee */

undefined4 FUN_ram_481490ee(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4813aab0(param_1,8);
  if (iVar1 == 0) {
    puVar3 = *(undefined1 **)(param_1 + 4);
    *puVar3 = param_2;
    puVar3[1] = 0;
    puVar3[4] = param_3;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[2] = 5;
    puVar3[3] = 2;
    puVar3[6] = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}


