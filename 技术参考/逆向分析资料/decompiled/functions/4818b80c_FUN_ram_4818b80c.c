/* Firmware entry: 0x4818b80c */

void FUN_ram_4818b80c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)&DAT_ram_50090050;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = *(undefined4 *)(param_1 + -0x50090050 + (int)puVar1);
    puVar1 = puVar2;
  } while (puVar2 != (undefined4 *)&DAT_ram_50090060);
  return;
}


