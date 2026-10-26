/* Firmware entry: 0x4817f27e */

undefined4 FUN_ram_4817f27e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (puVar2[2] != 0) {
    puVar1 = (undefined4 *)thunk_FUN_ram_4817b126(1,0x10);
    puVar2[3] = puVar1;
    puVar2 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffff96;
    }
  }
  puVar2[2] = param_3;
  puVar2[1] = param_4;
  *puVar2 = param_2;
  *(undefined4 **)(param_1 + 4) = puVar2;
  return 0;
}


