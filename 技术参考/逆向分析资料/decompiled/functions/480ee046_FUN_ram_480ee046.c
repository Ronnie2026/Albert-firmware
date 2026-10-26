/* Firmware entry: 0x480ee046 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480ee046(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined8 uVar18;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  code *pcStack_98;
  int iStack_94;
  undefined1 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  uint local_80;
  undefined1 uStack_7c;
  byte bStack_7b;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  uint auStack_74 [6];
  char cStack_5c;
  char cStack_5b;
  undefined *puStack_5a;
  byte bStack_58;
  char cStack_57;
  char cStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  byte bStack_51;
  byte bStack_50;
  char cStack_4f;
  byte bStack_4e;
  char cStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined2 uStack_46;
  undefined1 uStack_44;
  undefined1 uStack_43;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar10 = 2;
  while (fence(), (DAT_ram_4ff5ce9c & 1) != 0) {
    if (iVar10 == 1) {
      uStack_b0 = 0;
      iStack_b4 = 0;
      iStack_b8 = 0;
      iStack_bc = 0;
      uStack_c0 = 0;
      iVar10 = 0;
      goto LAB_ram_480ee0da;
    }
    iVar10 = 1;
  }
  uStack_c0 = DAT_ram_4ff5cea0;
  iStack_bc = DAT_ram_4ff5cea8;
  iStack_b8 = DAT_ram_4ff5ceac;
  iStack_b4 = DAT_ram_4ff5ceb0;
  uStack_b0 = DAT_ram_4ff5ceb4;
  fence();
  iVar10 = DAT_ram_4ff5cea4;
LAB_ram_480ee0da:
  uVar18 = FUN_ram_4ff21a0a();
  DAT_ram_4ff5cea8 = __divdi3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),1000,0);
  DAT_ram_4ff5cea0 = 1;
  DAT_ram_4ff5cea4 = 8;
  DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 10000;
  DAT_ram_4ff5ceb4 = 0;
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
  iVar4 = __ctzsi2(param_1);
  if (iVar4 < 8) {
    piVar14 = &DAT_ram_4ff5ca60 + iVar4;
    iVar15 = *piVar14;
    fence();
    uVar5 = FUN_ram_48025ba6();
    iVar4 = FUN_ram_48025b94();
    pcStack_98 = FUN_ram_48025b94;
    uStack_90 = 0;
    iStack_94 = FUN_ram_48025b94();
    fence();
    fence();
    if (((DAT_ram_4ff6def0 == 0) || (1000000 < (uint)(iStack_94 - DAT_ram_4ff6deec))) ||
       (2000000 < (uint)(iStack_94 - DAT_ram_4ff6def0))) {
      fence();
      DAT_ram_4ff6def0 = iStack_94;
    }
    DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
    uStack_90 = 1;
    if (param_1 == 0x10) {
      iVar17 = FUN_ram_480edf6a();
      iVar9 = iVar17;
    }
    else if (param_1 < 0x11) {
      if (param_1 == 4) {
        iVar17 = FUN_ram_480316a0();
        iVar9 = iVar17;
      }
      else if (param_1 < 5) {
        if (param_1 == 1) {
          iVar17 = FUN_ram_48035914();
          iVar9 = iVar17;
        }
        else {
          if (param_1 != 2) goto LAB_ram_480ee78e;
          iVar17 = FUN_ram_48031a56();
          iVar9 = iVar17;
        }
      }
      else {
        if (param_1 != 8) {
LAB_ram_480ee78e:
          FUN_ram_4807e2fa(&pcStack_98);
          goto LAB_ram_480ee142;
        }
        iVar17 = FUN_ram_48031876();
        iVar9 = iVar17;
      }
    }
    else {
      if (param_1 == 0x40) {
        if (DAT_ram_4ff6dd51 != '\0') {
          uStack_8c = _DAT_ram_4ff48984;
          uStack_88 = _DAT_ram_4ff48988;
          uStack_84 = DAT_ram_4ff4898c;
          FUN_ram_4803153a(&uStack_8c);
          local_80 = 0x31525355;
          uStack_78 = uStack_88;
          uStack_7c = 1;
          bStack_7b = (byte)uStack_8c;
          uStack_7a = uStack_8c._2_2_;
          auStack_74[0] = 0x811c9dc5;
          puVar12 = &local_80;
          do {
            uVar7 = *puVar12;
            puVar12 = (uint *)((int)puVar12 + 1);
            auStack_74[0] = (auStack_74[0] ^ (byte)uVar7) * 0x1000193;
          } while (puVar12 != auStack_74);
          iVar17 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"B40P101",0,0);
          if (iVar17 != 0) {
            iVar9 = FUN_ram_48122518(&DAT_ram_4ff6dec8,"ussRadar",&local_80,0x10);
            FUN_ram_48122142(&DAT_ram_4ff6dec8);
            if (iVar9 == 0x10) {
              DAT_ram_4ff6dd51 = '\x01';
              DAT_ram_4ff6dd50 = 1;
              iVar9 = 1;
              goto LAB_ram_480ee266;
            }
          }
        }
        goto LAB_ram_480ee788;
      }
      if (param_1 == 0x80) {
        iVar17 = 0;
        if (DAT_ram_4ff6dd48 != '\0') {
          iVar17 = FUN_ram_48032378(DAT_ram_4ff6dd44);
          if (iVar17 == 0) goto LAB_ram_480ee788;
          DAT_ram_4ff6dd48 = '\0';
          DAT_ram_4ff6dd44 = 0;
        }
        iVar9 = iVar17;
        if (((((DAT_ram_4ff6dd4a != '\0') &&
              (puVar16 = &DAT_ram_4ff4894c, (byte)(DAT_ram_4ff4894c._3_1_ - 10U) < 0x5b)) &&
             (((byte)((char)DAT_ram_4ff48950 - 1U) < 7 &&
              ((DAT_ram_4ff48950._2_2_ <= &pmpaddr56 &&
               ((byte)(DAT_ram_4ff48954._2_1_ - 10U) < 0x5b)))))) &&
            ((byte)(DAT_ram_4ff48954._3_1_ - 1U) < 7)) &&
           (((((byte)DAT_ram_4ff4895c < 5 && (DAT_ram_4ff4895c._1_1_ < 2)) &&
             ((byte)(DAT_ram_4ff4895c._2_1_ - 10U) < 0x5b)) &&
            ((DAT_ram_4ff4895c._3_1_ < 3 && ((byte)((char)DAT_ram_4ff48960 - 1U) < 0x3f)))))) {
          do {
            pbVar11 = (byte *)((int)puVar16 + 0x19);
            puVar16 = (undefined4 *)((int)puVar16 + 5);
            if (100 < *pbVar11) goto LAB_ram_480ee266;
          } while (puVar16 != (undefined4 *)0x4ff4896a);
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = uStack_84 & 0xffff0000;
          FUN_ram_4819ad74(&uStack_8c,10,"a%08lx",DAT_ram_4ff6dd4c);
          pbVar8 = memset(&local_80,0,0x3e);
          puVar16 = &DAT_ram_4ff4894c;
          bStack_7b = DAT_ram_4ff4894c._1_1_ << 1 | DAT_ram_4ff4894c._2_1_ << 2 |
                      (byte)DAT_ram_4ff4894c;
          uStack_7c = 5;
          local_80 = 0x35424d41;
          pbVar11 = pbVar8;
          do {
            bVar1 = *(byte *)((int)puVar16 + 0x19);
            bVar2 = *(byte *)((int)puVar16 + 0x1a);
            pbVar11[6] = *(byte *)(puVar16 + 6);
            pbVar11[7] = bVar1;
            bVar1 = *(byte *)((int)puVar16 + 0x1b);
            bVar3 = *(byte *)(puVar16 + 7);
            pbVar11[8] = bVar2;
            pbVar11[9] = bVar1;
            pbVar11[10] = bVar3;
            puVar16 = (undefined4 *)((int)puVar16 + 5);
            pbVar11 = pbVar11 + 5;
          } while (puVar16 != (undefined4 *)0x4ff4896a);
          bStack_58 = DAT_ram_4ff48954._1_1_ << 1 | (byte)DAT_ram_4ff48954;
          cStack_5c = DAT_ram_4ff4894c._3_1_;
          cStack_5b = (char)DAT_ram_4ff48950;
          cStack_57 = DAT_ram_4ff48954._2_1_;
          puStack_5a = DAT_ram_4ff48950._2_2_;
          cStack_56 = DAT_ram_4ff48954._3_1_;
          uStack_55 = (undefined1)DAT_ram_4ff48958;
          uStack_53 = DAT_ram_4ff48958._2_1_;
          uStack_54 = DAT_ram_4ff48958._1_1_;
          uStack_52 = DAT_ram_4ff48958._3_1_;
          bStack_51 = (byte)DAT_ram_4ff4895c;
          cStack_4f = DAT_ram_4ff4895c._2_1_;
          bStack_50 = DAT_ram_4ff4895c._1_1_;
          bStack_4e = DAT_ram_4ff4895c._3_1_;
          cStack_4d = (char)DAT_ram_4ff48960;
          uStack_4c = DAT_ram_4ff48960._1_1_;
          uStack_4a = DAT_ram_4ff48960._3_1_;
          uStack_4b = DAT_ram_4ff48960._2_1_;
          uVar7 = 0x811c9dc5;
          pbVar11 = pbVar8;
          do {
            bVar1 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar7 = (uVar7 ^ bVar1) * 0x1000193;
          } while (pbVar8 + 0x3a != pbVar11);
          uStack_44 = (undefined1)(uVar7 >> 0x10);
          uStack_46 = (undefined2)uVar7;
          uStack_43 = (undefined1)(uVar7 >> 0x18);
          iVar17 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"amb_light5",0,0);
          if (iVar17 != 0) {
            iVar9 = FUN_ram_48122518(&DAT_ram_4ff6dec8,&uStack_8c,pbVar8,0x3e);
            FUN_ram_48122142(&DAT_ram_4ff6dec8);
            if (iVar9 == 0x3e) {
              DAT_ram_4ff6dd49 = 1;
              iVar9 = FUN_ram_48032dec();
              if (iVar9 != 0) {
                if (DAT_ram_4ff6dd4c == 0) {
                  FUN_ram_4ff45158(DAT_ram_4ff6dcac + 0x6b6e,&DAT_ram_4ff4894c,0x36);
LAB_ram_480ee770:
                  DAT_ram_4ff5bd64._0_1_ = 1;
                }
                else if (*(byte *)(DAT_ram_4ff6dcac + 0x6a08) != 0) {
                  piVar13 = (int *)(DAT_ram_4ff6dcac + 0x3608);
                  uVar7 = 0;
                  do {
                    iVar9 = *piVar13;
                    piVar13 = piVar13 + 0x68;
                    if (DAT_ram_4ff6dd4c == iVar9) {
                      FUN_ram_4ff45158(DAT_ram_4ff6dcac + uVar7 * 0x1a0 + 0x3732,&DAT_ram_4ff4894c,
                                       0x36);
                      goto LAB_ram_480ee770;
                    }
                    uVar7 = uVar7 + 1;
                  } while (*(byte *)(DAT_ram_4ff6dcac + 0x6a08) != uVar7);
                }
              }
              iVar9 = 1;
              goto LAB_ram_480ee266;
            }
          }
LAB_ram_480ee788:
          iVar17 = 0;
          iVar9 = 0;
        }
      }
      else {
        if (param_1 != 0x20) goto LAB_ram_480ee78e;
        iVar17 = FUN_ram_480334d2();
        iVar9 = iVar17;
      }
    }
LAB_ram_480ee266:
    uStack_90 = 0;
    DAT_ram_4ff6deec = (*pcStack_98)();
    fence();
    DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
    DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
    if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iStack_94)) {
      DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iStack_94;
    }
    iVar6 = FUN_ram_48025b94();
    uVar7 = iVar6 - iVar4;
    iVar4 = (uint)DAT_ram_4ff5ca5c * 0x10;
    *(undefined4 *)(&DAT_ram_4ff5ca1c + iVar4) = uVar5;
    *(uint *)(&DAT_ram_4ff5ca18 + iVar4) = param_1;
    *(uint *)(&DAT_ram_4ff5ca20 + iVar4) = uVar7;
    (&DAT_ram_4ff5ca24)[iVar4] = (char)iVar9;
    DAT_ram_4ff5ca5c = DAT_ram_4ff5ca5c + 1 & 3;
    if (DAT_ram_4ff5ca5d < 4) {
      DAT_ram_4ff5ca5d = DAT_ram_4ff5ca5d + 1;
    }
    if (DAT_ram_4ff5ca58 < uVar7) {
      DAT_ram_4ff5ca58 = uVar7;
    }
    if (iVar17 != 0) {
      if (param_1 == 8) {
        uVar7 = 2;
      }
      else if (param_1 < 9) {
        uVar7 = 4;
        if ((param_1 != 2) && (uVar7 = 8, param_1 != 4)) {
          uVar7 = 1;
        }
      }
      else {
        uVar7 = 0x200;
        if (((param_1 != 0x20) && (uVar7 = 0x10, param_1 != 0x40)) &&
           (uVar7 = 0x400, param_1 != 0x10)) {
          uVar7 = 0x40;
        }
      }
      fence();
      if (iVar15 == *piVar14) {
        DAT_ram_4ff6de90 = DAT_ram_4ff6de90 | uVar7;
      }
      DAT_ram_4ff6de94 = DAT_ram_4ff6de94 & ~param_1;
      fence();
      if (iVar15 != *piVar14) {
        DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | param_1;
      }
      DAT_ram_4ff6de88 = DAT_ram_4ff6de88 + 1;
      DAT_ram_4ff6de7c = 0;
      goto joined_r0x480ee38c;
    }
    DAT_ram_4ff6de84 = DAT_ram_4ff6de84 + 1;
    iVar4 = FUN_ram_48025ba6();
    DAT_ram_4ff6de78 = iVar4 + 5000;
    DAT_ram_4ff6de7c = 1;
  }
LAB_ram_480ee142:
  iVar17 = 0;
joined_r0x480ee38c:
  if (iVar10 == 1) {
    uVar18 = FUN_ram_4ff21a0a();
    DAT_ram_4ff5cea8 = __divdi3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),1000,0);
    DAT_ram_4ff5ceac = DAT_ram_4ff5cea8 + 2000;
    DAT_ram_4ff5ceb4 = 0;
    DAT_ram_4ff5cea0 = 1;
    DAT_ram_4ff5ceb0 = DAT_ram_4ff5cea8;
  }
  else {
    DAT_ram_4ff5cea0 = uStack_c0;
    DAT_ram_4ff5cea8 = iStack_bc;
    DAT_ram_4ff5ceac = iStack_b8;
    DAT_ram_4ff5ceb0 = iStack_b4;
    DAT_ram_4ff5ceb4 = uStack_b0;
  }
  DAT_ram_4ff5ce9c = DAT_ram_4ff5ce9c + 2;
  DAT_ram_4ff5cea4 = iVar10;
  return iVar17;
}


