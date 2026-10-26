/* Firmware entry: 0x48120e5c */

void FUN_ram_48120e5c(void)

{
  undefined8 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff21a0a();
  DAT_ram_4ff6e044 = __divdi3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),1000,0);
  fence();
  DAT_ram_4ff6e048 = 1;
  return;
}


