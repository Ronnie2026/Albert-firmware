/* Firmware entry: 0x4816763e */

undefined4 FUN_ram_4816763e(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcStack_44;
  undefined1 auStack_40 [4];
  ushort uStack_3c;
  short sStack_3a;
  ushort uStack_38;
  short sStack_36;
  ushort uStack_34;
  short sStack_32;
  ushort uStack_30;
  short sStack_2e;
  ushort uStack_2c;
  short sStack_2a;
  ushort uStack_24;
  short sStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: client or url must not NULL\n",uVar5,"HTTP_CLIENT"
                    );
    return 0x102;
  }
  FUN_ram_481910ae(auStack_40);
  sVar1 = strlen(param_2);
  iVar2 = FUN_ram_481910bc(param_2,sVar1,0,auStack_40);
  if (iVar2 != 0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Error parse url %s\n",uVar5,"HTTP_CLIENT",param_2)
    ;
    return 0x102;
  }
  pcVar6 = *(char **)(param_1 + 0x50);
  if (pcVar6 == (char *)0x0) {
    iVar2 = *(int *)(param_1 + 0x54);
    if ((sStack_36 == 0) ||
       (iVar4 = FUN_ram_481692f0(param_1 + 0x50,param_2 + uStack_38,sStack_36), iVar4 != 0))
    goto LAB_ram_481676ba;
  }
  else {
    pcVar3 = strdup(pcVar6);
    iVar2 = *(int *)(param_1 + 0x54);
    if (sStack_36 == 0) {
      if (pcVar3 != (char *)0x0) {
        iVar4 = strcasecmp(pcVar3,pcVar6);
joined_r0x4816789e:
        if (iVar4 != 0) {
          if (((*(int **)(param_1 + 0x20) == (int *)0x0) ||
              (iVar4 = **(int **)(param_1 + 0x20), iVar4 == 0)) ||
             (iVar4 = FUN_ram_4816901a(iVar4,&DAT_ram_481c3da8,pcVar6), iVar4 != 0))
          goto LAB_ram_48167760;
          iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 4);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) {
            thunk_FUN_ram_4ff209c6();
            *(undefined4 *)(iVar4 + 0xc) = 0;
            *(undefined4 *)(iVar4 + 8) = 0;
            *(undefined4 *)(iVar4 + 0x10) = 0;
          }
          FUN_ram_4816725c(param_1);
        }
LAB_ram_481676b0:
        thunk_FUN_ram_4ff209c6(pcVar3);
      }
    }
    else {
      iVar4 = FUN_ram_481692f0(param_1 + 0x50,param_2 + uStack_38,sStack_36);
      if (iVar4 == 0) goto LAB_ram_48167760;
      if (pcVar3 != (char *)0x0) {
        pcVar6 = *(char **)(param_1 + 0x50);
        if (pcVar6 != (char *)0x0) {
          iVar4 = strcasecmp(pcVar3,pcVar6);
          goto joined_r0x4816789e;
        }
        goto LAB_ram_481676b0;
      }
    }
LAB_ram_481676ba:
    if (sStack_3a != 0) {
      iVar4 = FUN_ram_481692f0(param_1 + 0x4c,param_2 + uStack_3c);
      if (iVar4 == 0) goto LAB_ram_4816775e;
      pcVar6 = *(char **)(param_1 + 0x4c);
      iVar4 = strcasecmp(pcVar6,"http");
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x54) = 0x50;
      }
      else {
        iVar4 = strcasecmp(pcVar6,"https");
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x54) = 0x1bb;
        }
      }
    }
    if (sStack_32 == 0) {
      iVar4 = *(int *)(param_1 + 0x54);
    }
    else {
      iVar4 = strtol(param_2 + uStack_34,(char **)0x0,10);
      *(int *)(param_1 + 0x54) = iVar4;
    }
    if (iVar4 != iVar2) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 4);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
        thunk_FUN_ram_4ff209c6();
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      FUN_ram_4816725c(param_1);
    }
    if (sStack_22 == 0) {
LAB_ram_48167702:
      if (sStack_2e == 0) {
        iVar2 = FUN_ram_481692f0(param_1 + 0x60,&DAT_ram_481b546c,0xffffffff);
      }
      else {
        iVar2 = FUN_ram_481692f0(param_1 + 0x60,param_2 + uStack_30);
      }
      if (iVar2 != 0) {
        if (sStack_2a == 0) {
          if (*(int *)(param_1 + 100) != 0) {
            thunk_FUN_ram_4ff209c6();
            *(undefined4 *)(param_1 + 100) = 0;
            return 0;
          }
          return 0;
        }
        iVar2 = FUN_ram_481692f0(param_1 + 100,param_2 + uStack_2c);
        if (iVar2 != 0) {
          return 0;
        }
      }
    }
    else {
      pcStack_44 = (char *)0x0;
      iVar2 = FUN_ram_481692f0(&pcStack_44,param_2 + uStack_24);
      pcVar6 = pcStack_44;
      if (iVar2 != 0) {
        if (pcStack_44 == (char *)0x0) {
          return 0x101;
        }
        pcVar3 = strchr(pcStack_44,0x3a);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
          iVar2 = FUN_ram_481692f0(param_1 + 0x5c,pcVar3 + 1,0xffffffff);
          if (iVar2 == 0) goto LAB_ram_4816775e;
        }
        iVar2 = FUN_ram_481692f0(param_1 + 0x58,pcVar6,0xffffffff);
        if (iVar2 != 0) {
          thunk_FUN_ram_4ff209c6(pcStack_44);
          goto LAB_ram_48167702;
        }
      }
    }
  }
LAB_ram_4816775e:
  pcVar3 = (char *)0x0;
LAB_ram_48167760:
  thunk_FUN_ram_4ff209c6(pcVar3);
  return 0x101;
}


