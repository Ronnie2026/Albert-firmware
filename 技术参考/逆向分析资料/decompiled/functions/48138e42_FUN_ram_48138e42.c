/* Firmware entry: 0x48138e42 */

void FUN_ram_48138e42(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4813857c(0);
  FUN_ram_4813857c(1);
  FUN_ram_4813857c(2);
  FUN_ram_4813857c(3);
  puVar2 = (undefined4 *)&DAT_ram_4ff6c904;
  do {
    pcVar1 = (char *)(puVar2 + 8);
    puVar2 = puVar2 + 0x4a;
    if (*pcVar1 != '\0') {
      FUN_ram_48142636(1000,&LAB_ram_48138eaa,0);
      return;
    }
  } while (puVar2 != &DAT_ram_4ff6cda4);
  FUN_ram_4814268a(&LAB_ram_48138eaa,0);
  DAT_ram_4ff6e19f = 0;
  return;
}


