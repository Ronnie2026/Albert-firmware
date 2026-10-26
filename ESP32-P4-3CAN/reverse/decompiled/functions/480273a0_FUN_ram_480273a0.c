/* Firmware entry: 0x480273a0 */

/* WARNING: Removing unreachable block (ram,0x48027490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_480273a0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4819afa6(0,0,param_1,param_2);
  iVar5 = uVar1 + 1;
  if (uVar1 < 0x40) {
    FUN_ram_4819afa6(&DAT_ram_4ff5b980,iVar5,param_1,param_2);
    ets_printf(&DAT_ram_481cd004,&DAT_ram_4ff5b980);
  }
  else {
    iVar2 = thunk_FUN_ram_4ff2070c(iVar5);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_ram_4819afa6(iVar2,iVar5,param_1,param_2);
    ets_printf(&DAT_ram_481cd004,iVar2);
    thunk_FUN_ram_4ff209c6(iVar2);
  }
  if (DAT_ram_4ff6dc14 == -1) {
    return uVar1;
  }
LAB_ram_48027454:
  do {
    if (DAT_ram_4ff6dc14 == 0) {
      do {
        do {
        } while ((_DAT_ram_500ca01c >> 0x10 & 0xff) != 0);
      } while ((_DAT_ram_500ca070 >> 4 & 0xf) != 0);
      return uVar1;
    }
LAB_ram_4802745a:
    do {
      if (DAT_ram_4ff6dc14 == 3) goto LAB_ram_4802751a;
      if (DAT_ram_4ff6dc14 < 4) {
        if (DAT_ram_4ff6dc14 == 1) goto LAB_ram_480274ea;
        if (DAT_ram_4ff6dc14 == 2) {
LAB_ram_4802746c:
          puVar3 = &DAT_ram_500cc000;
LAB_ram_48027474:
          while (uVar4 = *(uint *)(puVar3 + 0x1c) >> 0x10 & 0xff, puVar3 != (undefined1 *)0x50121000
                ) {
            while( true ) {
              if (uVar4 == 0) {
                if ((*(uint *)(puVar3 + 0x70) >> 4 & 0xf) == 0) {
                  return uVar1;
                }
                goto LAB_ram_4802745a;
              }
              if (DAT_ram_4ff6dc14 == 3) goto LAB_ram_4802751a;
              if (3 < DAT_ram_4ff6dc14) break;
              if (DAT_ram_4ff6dc14 != 1) goto LAB_ram_4802746c;
LAB_ram_480274ea:
              puVar3 = &DAT_ram_500cb000;
              uVar4 = _DAT_ram_500cb01c >> 0x10 & 0xff;
            }
LAB_ram_48027510:
            puVar3 = &DAT_ram_500ce000;
          }
          if ((int)uVar4 >> 3 != 0) goto LAB_ram_4802745a;
          if ((_DAT_ram_50121070 >> 4 & 0xf) == 0) {
            return uVar1;
          }
          goto LAB_ram_48027454;
        }
      }
      else if (DAT_ram_4ff6dc14 == 4) goto LAB_ram_48027510;
    } while ((_DAT_ram_5012101c >> 0x13 & 0x1f) != 0);
    if ((_DAT_ram_50121070 >> 4 & 0xf) == 0) {
      return uVar1;
    }
  } while( true );
LAB_ram_4802751a:
  puVar3 = &DAT_ram_500cd000;
  goto LAB_ram_48027474;
}


