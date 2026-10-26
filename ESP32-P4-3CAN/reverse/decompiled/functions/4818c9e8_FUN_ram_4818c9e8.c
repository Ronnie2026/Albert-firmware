/* Firmware entry: 0x4818c9e8 */

void FUN_ram_4818c9e8(void)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined4 *)FUN_ram_48139460(1,0x54);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 9) = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0;
    puVar1[7] = 0xffffff;
    puVar1[0xd] = 0x78;
    *(undefined2 *)(puVar1 + 0xe) = 0xff;
  }
  return;
}


