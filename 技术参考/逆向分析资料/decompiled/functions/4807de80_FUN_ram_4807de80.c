/* Firmware entry: 0x4807de80 */

void FUN_ram_4807de80(void)

{
  int iVar1;
  void *pvVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pvVar2 = DAT_ram_4ff6dc98;
  if (DAT_ram_4ff6dc98 == (void *)0x0) {
    pvVar2 = (void *)FUN_ram_4ff206d8(200,0x404);
    if (pvVar2 == (void *)0x0) {
      fence();
      DAT_ram_4ff6df90 = 1;
      fence();
      return;
    }
    memset(pvVar2,0,200);
    DAT_ram_4ff6dc98 = pvVar2;
    *(undefined1 **)((int)pvVar2 + 0xc4) = &DAT_ram_481df390;
  }
  iVar1 = FUN_ram_4807dd70(pvVar2);
  pvVar2 = DAT_ram_4ff6dc98;
  if (iVar1 == 0) {
    *(char **)((int)DAT_ram_4ff6dc98 + 0xc4) = "management_storage";
  }
  fence();
  DAT_ram_4ff6df90 = *(undefined1 *)((int)pvVar2 + 0x94);
  return;
}


