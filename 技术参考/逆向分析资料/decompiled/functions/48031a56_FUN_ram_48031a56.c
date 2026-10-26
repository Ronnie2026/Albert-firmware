/* Firmware entry: 0x48031a56 */

bool FUN_ram_48031a56(void)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",0,0);
  bVar2 = false;
  if (iVar3 != 0) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff69640,0xffffffff);
    uVar1 = DAT_ram_4ff69666;
    FUN_ram_4ff3ee10(&DAT_ram_4ff69640);
    iVar3 = FUN_ram_481222a4(&DAT_ram_4ff6dec8,"bpre_m",uVar1);
    FUN_ram_48122142(&DAT_ram_4ff6dec8);
    bVar2 = iVar3 == 1;
  }
  return bVar2;
}


