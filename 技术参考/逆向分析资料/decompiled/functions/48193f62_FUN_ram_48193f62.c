/* Firmware entry: 0x48193f62 */

int FUN_ram_48193f62(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48193b74();
  if (iVar1 != 0) {
    *(undefined1 *)(*(int *)(iVar1 + 8) + 0x50) = 0;
    FUN_ram_4819334c(iVar1,&DAT_ram_48193a34,FUN_ram_48193934,FUN_ram_4819382c,0x481937de,0x481936c2
                     ,FUN_ram_481935aa,0x48193e82);
    FUN_ram_48193384(iVar1,&LAB_ram_4819359e);
    *(undefined1 **)(iVar1 + 0x30) = &LAB_ram_481934cc;
  }
  return iVar1;
}


