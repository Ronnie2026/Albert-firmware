/* Firmware entry: 0x4ff3fbfa */

undefined4 * FUN_ram_4ff3fbfa(void)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_4ff3f268(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    FUN_ram_4ff3fade(puVar1 + 1);
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[9] = 0;
    puVar1[8] = 0xb33fffff;
  }
  return puVar1;
}


