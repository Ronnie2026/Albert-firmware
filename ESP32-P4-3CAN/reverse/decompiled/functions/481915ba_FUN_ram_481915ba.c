/* Firmware entry: 0x481915ba */

undefined4
FUN_ram_481915ba(char *param_1,size_t param_2,int param_3,int param_4,undefined4 param_5,
                uint *param_6)

{
  ushort uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_80;
  int iStack_7c;
  undefined4 uStack_78;
  uint auStack_74 [2];
  undefined1 uStack_6c;
  char cStack_6b;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
    iStack_4c = 0;
  }
  else {
    iStack_4c = 0;
    if (*(int *)(param_4 + 0x54) == 1) {
      iStack_4c = 2;
    }
    else if (*(int *)(param_4 + 0x54) == 2) {
      iStack_4c = 10;
    }
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  iStack_50 = 0;
  iStack_48 = 1;
  pcVar3 = strndup(param_1,param_2);
  if (pcVar3 == (char *)0x0) {
    uVar9 = 0x101;
LAB_ram_481917b4:
    puVar8 = (undefined4 *)FUN_ram_4819bf88();
    FUN_ram_48192182(param_5,1,*puVar8);
    return uVar9;
  }
  iVar4 = FUN_ram_481340f8(pcVar3,0,&iStack_50,auStack_74);
  uVar2 = auStack_74[0];
  if ((iVar4 != 0) || (auStack_74[0] == 0)) {
    uVar9 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,
                     "E (%lu) %s: couldn\'t get hostname for :%s: getaddrinfo() returns %d, addrinfo=%p\n"
                     ,uVar9,&DAT_ram_481e1b30,pcVar3,iVar4,auStack_74[0]);
    thunk_FUN_ram_4ff209c6(pcVar3);
    uVar9 = 0x8001;
    goto LAB_ram_481917b4;
  }
  thunk_FUN_ram_4ff209c6(pcVar3);
  uVar5 = FUN_ram_48136a1a(*(undefined4 *)(uVar2 + 4),*(undefined4 *)(uVar2 + 8),
                           *(undefined4 *)(uVar2 + 0xc));
  uVar2 = auStack_74[0];
  if ((int)uVar5 < 0) {
    uVar9 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,
                     "E (%lu) %s: Failed to create socket (family %d socktype %d protocol %d)\n",
                     uVar9,&DAT_ram_481e1b30,*(undefined4 *)(auStack_74[0] + 4),
                     *(undefined4 *)(auStack_74[0] + 8),*(undefined4 *)(auStack_74[0] + 0xc));
    uVar9 = 0x8002;
    FUN_ram_481340d8(auStack_74[0]);
    goto LAB_ram_481917b4;
  }
  uVar1 = (ushort)((uint)param_3 >> 8);
  if (*(int *)(auStack_74[0] + 4) == 2) {
    iVar4 = *(int *)(auStack_74[0] + 0x14);
    *(ushort *)(iVar4 + 2) = (ushort)(param_3 << 8) | uVar1 & 0xff;
    FUN_ram_4ff45158(&uStack_6c,iVar4,0x10);
  }
  else {
    if (*(int *)(auStack_74[0] + 4) != 10) {
      uVar9 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: Unsupported protocol family %d\n",uVar9,
                       &DAT_ram_481e1b30,*(undefined4 *)(auStack_74[0] + 4));
      FUN_ram_4819bf9a(uVar5);
      uVar9 = 0x8003;
      FUN_ram_481340d8(auStack_74[0]);
      goto LAB_ram_481917b4;
    }
    iVar4 = *(int *)(auStack_74[0] + 0x14);
    *(ushort *)(iVar4 + 2) = (ushort)(param_3 << 8) | uVar1 & 0xff;
    *(undefined1 *)(iVar4 + 1) = 10;
    FUN_ram_4ff45158(&uStack_6c,iVar4,0x1c);
  }
  FUN_ram_481340d8(uVar2);
  if (param_4 == 0) {
LAB_ram_48191716:
    iVar4 = FUN_ram_481914fe(uVar5,1);
    if (iVar4 == 0) {
      uVar9 = 0x1c;
      if (cStack_6b == '\x02') {
        uVar9 = 0x10;
      }
      iVar4 = FUN_ram_481364b8(uVar5,&uStack_6c,uVar9);
      if (iVar4 < 0) {
        piVar6 = (int *)FUN_ram_4819bf88();
        if (*piVar6 != 0x77) {
          uVar9 = FUN_ram_4ff44d14();
          puVar8 = (undefined4 *)FUN_ram_4819bf88();
          uVar10 = 0x8004;
          uVar7 = FUN_ram_4819b6f4(*puVar8);
          FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: [sock=%d] connect() error: %s\n",uVar9,
                           &DAT_ram_481e1b30,uVar5,uVar7);
          goto LAB_ram_48191860;
        }
        iStack_48 = 0;
        iStack_50 = 10;
        iStack_4c = 0;
        if (param_4 != 0) {
          if (*(char *)(param_4 + 0x2c) != '\0') goto LAB_ram_48191746;
          iVar4 = *(int *)(param_4 + 0x30);
          if (0 < iVar4) {
            iStack_50 = iVar4 / 1000;
            iStack_4c = iStack_50 >> 0x1f;
            iStack_48 = (iVar4 % 1000) * 1000;
          }
        }
        auStack_74[1] = 0;
        auStack_74[0] = 0;
        if (uVar5 < 0x40) {
          auStack_74[(int)uVar5 >> 5] = 1 << (uVar5 & 0x1f) | auStack_74[(int)uVar5 >> 5];
        }
        iVar4 = FUN_ram_4800e594(uVar5 + 1,0,auStack_74,0,&iStack_50);
        if (iVar4 < 0) {
          uVar9 = FUN_ram_4ff44d14();
          puVar8 = (undefined4 *)FUN_ram_4819bf88();
          uVar10 = 0x8004;
          uVar7 = FUN_ram_4819b6f4(*puVar8);
          FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: [sock=%d] select() error: %s\n",uVar9,
                           &DAT_ram_481e1b30,uVar5,uVar7);
          puVar8 = (undefined4 *)FUN_ram_4819bf88();
          FUN_ram_48192182(param_5,1,*puVar8);
          goto LAB_ram_48191860;
        }
        if (iVar4 == 0) {
          uVar9 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: [sock=%d] select() timeout\n",uVar9,
                           &DAT_ram_481e1b30,uVar5);
          uVar10 = 0x8006;
          goto LAB_ram_48191860;
        }
        uStack_78 = 4;
        iVar4 = FUN_ram_481371ec(uVar5,0xfff,0x1007,&iStack_7c,&uStack_78);
        if (iVar4 < 0) {
          uVar9 = FUN_ram_4ff44d14();
          puVar8 = (undefined4 *)FUN_ram_4819bf88();
          uVar10 = 0x8005;
          uVar7 = FUN_ram_4819b6f4(*puVar8);
          FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: [sock=%d] getsockopt() error: %s\n",
                           uVar9,&DAT_ram_481e1b30,uVar5,uVar7);
          goto LAB_ram_48191860;
        }
        if (iStack_7c != 0) {
          FUN_ram_48192182(param_5,1);
          uVar9 = FUN_ram_4ff44d14();
          uVar10 = 0x8004;
          uVar7 = FUN_ram_4819b6f4(iStack_7c);
          FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: [sock=%d] delayed connect error: %s\n",
                           uVar9,&DAT_ram_481e1b30,uVar5,uVar7);
          goto LAB_ram_48191860;
        }
      }
      if (((param_4 == 0) || (*(char *)(param_4 + 0x2c) != '\0')) ||
         (iVar4 = FUN_ram_481914fe(uVar5,0), iVar4 == 0)) {
LAB_ram_48191746:
        *param_6 = uVar5;
        return 0;
      }
    }
  }
  else {
    iVar4 = *(int *)(param_4 + 0x30);
    iStack_48 = 0;
    uStack_44 = 0;
    if (iVar4 < 1) {
      iStack_50 = 10;
      iStack_4c = 0;
    }
    else {
      iStack_50 = iVar4 / 1000;
      iStack_4c = iStack_50 >> 0x1f;
      iStack_48 = (iVar4 % 1000) * 1000;
    }
    iVar4 = FUN_ram_481372bc(uVar5,0xfff,0x1006,&iStack_50,0x10);
    if (iVar4 == 0) {
      iVar4 = FUN_ram_481372bc(uVar5,0xfff,0x1005,&iStack_50,0x10);
      if (iVar4 == 0) {
        pcVar3 = *(char **)(param_4 + 0x40);
        if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
LAB_ram_481916f8:
          pcVar3 = *(char **)(param_4 + 0x50);
          if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) ||
             (iVar4 = FUN_ram_481372bc(uVar5,0xfff,0x100b,pcVar3,6), iVar4 == 0))
          goto LAB_ram_48191716;
          uVar9 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: Bind [sock=%d] to interface %s fail\n",
                           uVar9,&DAT_ram_481e1b30,uVar5,*(undefined4 *)(param_4 + 0x50));
        }
        else {
          iStack_7c = *(int *)(pcVar3 + 4);
          uStack_78 = *(undefined4 *)(pcVar3 + 8);
          auStack_74[0] = *(uint *)(pcVar3 + 0xc);
          local_80 = 1;
          iVar4 = FUN_ram_481372bc(uVar5,0xfff,8,&local_80,4);
          if (iVar4 == 0) {
            iVar4 = FUN_ram_481372bc(uVar5,6,3,&iStack_7c);
            if (iVar4 == 0) {
              iVar4 = FUN_ram_481372bc(uVar5,6,4,&uStack_78);
              if (iVar4 == 0) {
                iVar4 = FUN_ram_481372bc(uVar5,6,5,auStack_74,4);
                if (iVar4 == 0) goto LAB_ram_481916f8;
                uVar9 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: Fail to setsockopt TCP_KEEPCNT\n",
                                 uVar9,&DAT_ram_481e1b30);
              }
              else {
                uVar9 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,
                                 "E (%lu) %s: Fail to setsockopt TCP_KEEPINTVL\n",uVar9,
                                 &DAT_ram_481e1b30);
              }
            }
            else {
              uVar9 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: Fail to setsockopt TCP_KEEPIDLE\n",
                               uVar9,&DAT_ram_481e1b30);
            }
          }
          else {
            uVar9 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: Fail to setsockopt SO_KEEPALIVE\n",
                             uVar9,&DAT_ram_481e1b30);
          }
        }
      }
      else {
        uVar9 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: Fail to setsockopt SO_SNDTIMEO\n",uVar9,
                         &DAT_ram_481e1b30);
      }
    }
    else {
      uVar9 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481e1b30,"E (%lu) %s: Fail to setsockopt SO_RCVTIMEO\n",uVar9,
                       &DAT_ram_481e1b30);
    }
  }
  uVar10 = 0x8005;
LAB_ram_48191860:
  FUN_ram_4819bf9a(uVar5);
  return uVar10;
}


