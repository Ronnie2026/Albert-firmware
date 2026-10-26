/* Firmware entry: 0x48137c6c */

void FUN_ram_48137c6c(void)

{
  bool bVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4814268a(&LAB_ram_48137b76);
  FUN_ram_48142636(DAT_ram_4ff6e194,&LAB_ram_48137b76,0);
  uVar2 = DAT_ram_4ff6e194 << 1;
  if ((150000 < uVar2) || (bVar1 = uVar2 <= DAT_ram_4ff6e194, DAT_ram_4ff6e194 = uVar2, bVar1)) {
    DAT_ram_4ff6e194 = 150000;
  }
  return;
}


