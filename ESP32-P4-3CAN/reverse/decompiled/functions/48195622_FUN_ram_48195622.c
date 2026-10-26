/* Firmware entry: 0x48195622 */

void FUN_ram_48195622(void)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  char *pcStack_44;
  undefined4 uStack_40;
  char *pcStack_3c;
  int local_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  int aiStack_20 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4800656c(&DAT_ram_4ff6d634,0);
  DAT_ram_4ff6d638 = (int *)0x0;
  DAT_ram_4ff6d63c = (int *)0x0;
  DAT_ram_4ff6d640 = 0;
  pcVar1 = (char *)FUN_ram_481962e6("GLIBCXX_TUNABLES");
  uStack_40 = 0xf;
  pcStack_3c = "glibcxx.eh_pool";
  local_38 = 8;
  pcStack_34 = "obj_size";
  uStack_2c = 9;
  pcStack_28 = "obj_count";
  uStack_30 = 0;
  uStack_24 = 0x40;
  do {
    if (pcVar1 == (char *)0x0) {
      iVar2 = FUN_ram_48006ce0();
      DAT_ram_4ff6d640 = iVar2;
      if (iVar2 != 0) {
        piVar3 = (int *)thunk_FUN_ram_4ff2070c();
        DAT_ram_4ff6d63c = piVar3;
        if (piVar3 == (int *)0x0) {
          DAT_ram_4ff6d640 = 0;
        }
        else {
          DAT_ram_4ff6d638 = piVar3;
          *piVar3 = iVar2;
          piVar3[1] = 0;
        }
      }
      return;
    }
    pcVar1 = pcVar1 + (*pcVar1 == ':');
    iVar2 = FUN_ram_481955c8(&uStack_40,0,0xf,pcVar1);
    if ((iVar2 == 0) && (pcVar1[0xf] == '.')) {
      pcVar1 = pcVar1 + 0x10;
      piVar3 = &local_38;
      do {
        iVar5 = *piVar3;
        iVar2 = FUN_ram_481955c8(piVar3,0,iVar5,pcVar1,iVar5);
        if ((iVar2 == 0) && (pcVar1[iVar5] == '=')) {
          uVar4 = strtoul(pcVar1 + iVar5 + 1,&pcStack_44,0);
          pcVar1 = pcStack_44;
          if (((*pcStack_44 == ':') || (*pcStack_44 == '\0')) && (-1 < (int)uVar4)) {
            piVar3[2] = uVar4;
          }
          break;
        }
        piVar3 = piVar3 + 3;
      } while (piVar3 != aiStack_20);
    }
    pcVar1 = strchr(pcVar1,0x3a);
  } while( true );
}


