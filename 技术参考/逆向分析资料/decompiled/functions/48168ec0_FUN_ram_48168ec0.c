/* Firmware entry: 0x48168ec0 */

undefined4 FUN_ram_48168ec0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)*param_1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar1[2];
    thunk_FUN_ram_4ff209c6(*puVar1);
    thunk_FUN_ram_4ff209c6(puVar1[1]);
    thunk_FUN_ram_4ff209c6(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_ram_4ff209c6(param_1);
  return 0;
}


