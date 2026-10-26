/* Firmware entry: 0x4801b944 */

undefined4 FUN_ram_4801b944(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0x301;
  uVar3 = 0;
  do {
    iVar2 = FUN_ram_48012968(iVar1);
    iVar1 = iVar1 + 1;
    if (iVar2 != 0) {
      uVar3 = 0xffffffff;
    }
  } while (iVar1 != 0x315);
  return uVar3;
}


