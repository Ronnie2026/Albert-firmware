/* Firmware entry: 0x4814c110 */

int FUN_ram_4814c110(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar2 = &DAT_ram_4ff6d090;
  do {
    iVar1 = piVar2[5];
    if (iVar1 != 0) {
      if (*piVar2 == *param_1) {
        if (piVar2[1] == param_1[1]) {
          if ((char)piVar2[4] == (char)param_1[4]) {
            if (((*(byte *)(iVar1 + 0xe7) & 1) != 0) && ((*(byte *)(iVar1 + 0xe7) >> 2 & 1) != 0)) {
              return iVar1;
            }
          }
        }
      }
    }
    piVar2 = piVar2 + 7;
  } while (piVar2 != &DAT_ram_4ff6d11c);
  iVar1 = FUN_ram_4814ac3a(0);
  if (iVar1 < 0) {
    return 0;
  }
  if ((&DAT_ram_4ff6d06c)[iVar1 * 3] != 0) {
    return *(int *)((&DAT_ram_4ff6d06c)[iVar1 * 3] + 0x14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/nd6.c",0x7b0,"nd6_find_route",
                   "selected router must have a neighbor entry");
}


