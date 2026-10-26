/* Firmware entry: 0x4ff3b144 */

undefined4 * FUN_ram_4ff3b144(undefined1 param_1)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_4ff3f268(0x5c);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *puVar1 = puVar1;
    puVar1[0xf] = 1;
    puVar1[0x10] = 0;
    FUN_ram_4ff3abd4();
    *(undefined1 *)(puVar1 + 0x14) = param_1;
    puVar1[0x12] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0xb33fffff;
    FUN_ram_4ff3afa2(puVar1,0,0,0);
  }
  return puVar1;
}


