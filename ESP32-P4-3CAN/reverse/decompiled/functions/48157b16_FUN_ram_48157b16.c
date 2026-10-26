/* Firmware entry: 0x48157b16 */

undefined4 FUN_ram_48157b16(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  iVar4 = DAT_ram_4ff6e268;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = *(int *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (DAT_ram_4ff6e264 == '\0') {
    if (uVar2 < 3) {
LAB_ram_48157b6e:
      iVar4 = DAT_ram_4ff6e268;
      if (uVar2 == 0) goto LAB_ram_48157c0e;
      iVar3 = FUN_ram_4815682a(DAT_ram_4ff6e268);
      if (iVar3 == 0) {
        DAT_ram_4ff6e268 = 0;
LAB_ram_48157c9c:
        if (iVar6 == 0) {
          return 0;
        }
      }
      else {
        DAT_ram_4ff6e268 = iVar4;
        if ((iVar4 == 0) || (*(int *)(iVar4 + 0x10) == 0)) goto LAB_ram_48157c9c;
        pcVar5 = *(char **)(iVar4 + 0x20);
        bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0xe7);
        if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
          if ((bVar1 & 1) == 0) goto LAB_ram_48157c9c;
          if (*(int *)(iVar6 + 100) < *(int *)(iVar4 + 100)) goto LAB_ram_48157ce2;
        }
        else {
          if ((bVar1 >> 2 & 1) == 0) goto LAB_ram_48157c9c;
          if (*(int *)(iVar6 + 100) < *(int *)(iVar4 + 100)) {
            if (*(int *)(pcVar5 + 4) == 1) {
              FUN_ram_48159ad0(*(undefined4 *)(iVar4 + 0x1c));
              return 0;
            }
            goto LAB_ram_48157ce2;
          }
        }
      }
      if (*(int *)(iVar6 + 0x10) == 0) {
        return 0;
      }
      pcVar5 = *(char **)(iVar6 + 0x20);
      bVar1 = *(byte *)(*(int *)(iVar6 + 0x10) + 0xe7);
      iVar4 = iVar6;
      if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
        if ((bVar1 & 1) == 0) {
          return 0;
        }
LAB_ram_48157ce2:
        DAT_ram_4ff6e268 = iVar4;
        FUN_ram_48139d7a();
        return 0;
      }
      if ((bVar1 >> 2 & 1) == 0) {
        return 0;
      }
      if (*(int *)(pcVar5 + 4) != 1) goto LAB_ram_48157ce2;
      goto LAB_ram_48157cc8;
    }
    if (uVar2 != 5) goto LAB_ram_48157c0e;
  }
  else if (uVar2 != 5) {
    iVar3 = FUN_ram_4815682a(DAT_ram_4ff6e268);
    if (iVar3 == 0) {
      DAT_ram_4ff6e268 = 0;
    }
    else {
      DAT_ram_4ff6e268 = iVar4;
      if (iVar4 != 0) {
        return 0;
      }
    }
    DAT_ram_4ff6e264 = '\0';
    if (uVar2 < 3) goto LAB_ram_48157b6e;
LAB_ram_48157c0e:
    iVar4 = 0;
    DAT_ram_4ff6e268 = 0;
LAB_ram_48157c14:
    iVar4 = FUN_ram_4815680c(iVar4);
    if (iVar4 != 0) {
      while (*(int *)(iVar4 + 0x10) != 0) {
        bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0xe7);
        if ((*(char **)(iVar4 + 0x20) != (char *)0x0) && (**(char **)(iVar4 + 0x20) != '\0')) {
          bVar1 = bVar1 >> 2;
        }
        if ((bVar1 & 1) == 0) break;
        if ((DAT_ram_4ff6e268 != 0) && (*(int *)(DAT_ram_4ff6e268 + 0x10) != 0)) {
          bVar1 = *(byte *)(*(int *)(DAT_ram_4ff6e268 + 0x10) + 0xe7);
          if ((*(char **)(DAT_ram_4ff6e268 + 0x20) != (char *)0x0) &&
             (**(char **)(DAT_ram_4ff6e268 + 0x20) != '\0')) {
            bVar1 = bVar1 >> 2;
          }
          if (((bVar1 & 1) != 0) && (*(int *)(iVar4 + 100) <= *(int *)(DAT_ram_4ff6e268 + 100)))
          break;
        }
        DAT_ram_4ff6e268 = iVar4;
        iVar4 = FUN_ram_4815680c();
        if (iVar4 == 0) goto LAB_ram_48157c62;
      }
      goto LAB_ram_48157c14;
    }
LAB_ram_48157c62:
    if (DAT_ram_4ff6e268 == 0) {
      return 0;
    }
    if (*(int *)(DAT_ram_4ff6e268 + 0x10) == 0) {
      return 0;
    }
    pcVar5 = *(char **)(DAT_ram_4ff6e268 + 0x20);
    bVar1 = *(byte *)(*(int *)(DAT_ram_4ff6e268 + 0x10) + 0xe7);
    iVar4 = DAT_ram_4ff6e268;
    if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
      if ((bVar1 & 1) == 0) {
        return 0;
      }
    }
    else {
      if ((bVar1 >> 2 & 1) == 0) {
        return 0;
      }
      if (*(int *)(pcVar5 + 4) == 1) {
        FUN_ram_48159ad0(*(undefined4 *)(DAT_ram_4ff6e268 + 0x1c));
        return 0;
      }
    }
    goto LAB_ram_48157ce2;
  }
  pcVar5 = *(char **)(iVar6 + 0x20);
  DAT_ram_4ff6e264 = '\x01';
  if (((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) || (*(int *)(pcVar5 + 4) != 1)) {
    DAT_ram_4ff6e268 = iVar6;
    FUN_ram_48139d7a(*(undefined4 *)(iVar6 + 0x10));
    return 0;
  }
LAB_ram_48157cc8:
  DAT_ram_4ff6e268 = iVar6;
  FUN_ram_48159ad0(*(undefined4 *)(iVar6 + 0x1c));
  return 0;
}


