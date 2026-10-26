/* Firmware entry: 0x4ff37ad6 */

void FUN_ram_4ff37ad6(void)

{
  char *pcVar1;
  char *pcStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcStack_1c = (char *)0x0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_4ff36c7a(&pcStack_1c);
  pcVar1 = pcStack_1c;
  if (pcStack_1c == (char *)0x0) {
    pcVar1 = s_Cache_error_active__but_failed_t_ram_4ff542d4;
  }
  FUN_ram_4ff374f4(pcVar1);
  FUN_ram_4ff374f4(s_Rebooting____ram_4ff5422c + 0xc);
  return;
}


