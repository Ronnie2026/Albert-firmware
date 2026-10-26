/* Firmware entry: 0x4802ff30 */

byte FUN_ram_4802ff30(void)

{
  byte bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((DAT_ram_4ff6dcc4 == 0) || (DAT_ram_4ff6dc9c == 0)) ||
     (iVar2 = FUN_ram_4ff3b5f0(DAT_ram_4ff6dcc4,0x14), iVar2 != 1)) {
    return 0;
  }
  if (DAT_ram_4ff6dcc0 == 0) {
    if ((*(char *)(DAT_ram_4ff6dcc8 + 0x63fd) == '\0') &&
       (*(char *)(DAT_ram_4ff6dcc8 + 0x63fe) == '\0')) {
      fence();
      if (*(char *)(DAT_ram_4ff6dc9c + 0x87b5d) == '\0') {
        bVar1 = *(byte *)(DAT_ram_4ff6dc9c + 0x87b6a) ^ 1;
        goto LAB_ram_4802ff76;
      }
    }
  }
  bVar1 = 0;
LAB_ram_4802ff76:
  FUN_ram_4ff3afa2(DAT_ram_4ff6dcc4,0,0,0);
  return bVar1;
}


