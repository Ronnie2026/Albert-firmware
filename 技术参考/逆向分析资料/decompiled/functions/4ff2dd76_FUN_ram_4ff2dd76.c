/* Firmware entry: 0x4ff2dd76 */

undefined4 FUN_ram_4ff2dd76(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (undefined4 *)0x0) {
    fence();
    fence();
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *param_2 = *(undefined4 *)(param_1 + 0x7c);
    uVar1 = FUN_ram_481a9552(uVar2);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    *(undefined2 *)(param_2 + 1) = uVar1;
    uVar1 = FUN_ram_481a955c(uVar2);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined2 *)((int)param_2 + 6) = uVar1;
    uVar2 = FUN_ram_4ff3ba10(uVar2);
    param_2[2] = uVar2;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x80);
  }
  return 0;
}


