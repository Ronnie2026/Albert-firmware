/* Firmware entry: 0x480e7f9a */

void FUN_ram_480e7f9a(void)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = DAT_ram_4ff6420c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff64213 != '\0') &&
     (((DAT_ram_4ff6420c == (short *)0x0 || ((char)DAT_ram_4ff6420c[8] == '\0')) ||
      (((*(code **)(DAT_ram_4ff6420c + 2) == (code *)0x0 ||
        (iVar2 = (**(code **)(DAT_ram_4ff6420c + 2))(),
        (uint)(iVar2 - *(int *)(psVar1 + 4)) < *(uint *)(psVar1 + 6))) && (*DAT_ram_4ff6420c != 0)))
      ))) {
    DAT_ram_4ff64213 = 0;
    FUN_ram_480e72f0(&DAT_ram_4ff60e20);
    return;
  }
  return;
}


