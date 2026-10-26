/* Firmware entry: 0x48007a66 */

int FUN_ram_48007a66(undefined4 param_1,uint param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  ppuVar1 = &PTR_DAT_ram_481b4c48_ram_481e517c;
  iVar2 = 0;
  do {
    iVar3 = FUN_ram_4ff453ae(param_1,*ppuVar1);
    if (iVar3 == 0) {
      (&PTR_DAT_ram_4ff48158_ram_481e5190)[iVar2][0x10] = (byte)(param_2 >> 0xe) & 1;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    ppuVar1 = ppuVar1 + 1;
  } while (iVar2 != 5);
  puVar4 = (undefined4 *)FUN_ram_4819bf88();
  *puVar4 = 2;
  return -1;
}


