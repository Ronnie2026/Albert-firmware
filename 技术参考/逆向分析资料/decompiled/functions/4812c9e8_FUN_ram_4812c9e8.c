/* Firmware entry: 0x4812c9e8 */

undefined4 FUN_ram_4812c9e8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [68];
  
  puVar2 = DAT_ram_4ff6e090;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e090 == (uint *)0x0) {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle","E (%lu) %s: No certificates in bundle\n",uVar6,
                     "esp-x509-crt-bundle");
    uVar6 = 0xffffd000;
  }
  else {
    iVar9 = *(int *)(param_2 + 0x40);
    uVar8 = *(uint *)(param_2 + 0x3c);
    if ((iVar9 != 0) && (uVar8 != 0)) {
      iVar11 = (*DAT_ram_4ff6e090 >> 2) - 1;
      iVar3 = iVar11 / 2;
      if (iVar11 != -1) {
        iVar12 = 0;
        do {
          while( true ) {
            puVar4 = (ushort *)(puVar2[iVar3] + (int)puVar2);
            uVar10 = (uint)*puVar4;
            uVar7 = uVar10;
            if (uVar8 < uVar10) {
              uVar7 = uVar8;
            }
            iVar5 = FUN_ram_4ff4511a(iVar9,puVar4 + 2,uVar7);
            if (iVar5 == 0) {
              uVar1 = puVar4[1];
              FUN_ram_48177072(auStack_78);
              iVar9 = FUN_ram_4817892e(auStack_78,uVar10 + 4 + (int)puVar4,uVar1);
              if (iVar9 == 0) {
                iVar9 = FUN_ram_48177194(auStack_78,*(undefined4 *)(param_2 + 0x18c));
                if (iVar9 == 0) {
                  uVar6 = FUN_ram_4ff44d14();
                  FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle","E (%lu) %s: Unsuitable public key\n",
                                   uVar6,"esp-x509-crt-bundle");
                  FUN_ram_4817707c(auStack_78);
                }
                else {
                  iVar9 = FUN_ram_4817697e(*(undefined4 *)(param_2 + 0x188));
                  if (iVar9 == 0) {
                    uVar6 = FUN_ram_4ff44d14();
                    FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle","E (%lu) %s: Unknown message digest\n",
                                     uVar6,"esp-x509-crt-bundle");
                    FUN_ram_4817707c(auStack_78);
                  }
                  else {
                    uVar6 = FUN_ram_48176d4c();
                    iVar9 = FUN_ram_48176cf2(iVar9,*(undefined4 *)(param_2 + 0x18),
                                             *(undefined4 *)(param_2 + 0x14),auStack_70);
                    if (iVar9 == 0) {
                      iVar9 = FUN_ram_48177276(*(undefined4 *)(param_2 + 0x18c),
                                               *(undefined4 *)(param_2 + 400),auStack_78,
                                               *(undefined4 *)(param_2 + 0x188),auStack_70,uVar6,
                                               *(undefined4 *)(param_2 + 0x184),
                                               *(undefined4 *)(param_2 + 0x180));
                      if (iVar9 == 0) {
                        FUN_ram_4817707c(auStack_78);
                        uVar6 = FUN_ram_4ff44d14();
                        FUN_ram_4ff44bf0(3,"esp-x509-crt-bundle",
                                         "I (%lu) %s: Certificate validated\n",uVar6,
                                         "esp-x509-crt-bundle");
                        *param_4 = 0;
                        return 0;
                      }
                      uVar6 = FUN_ram_4ff44d14();
                      FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle",
                                       "E (%lu) %s: PK verify failed with error 0x%x\n",uVar6,
                                       "esp-x509-crt-bundle",-iVar9);
                      FUN_ram_4817707c(auStack_78);
                    }
                    else {
                      uVar6 = FUN_ram_4ff44d14();
                      FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle",
                                       "E (%lu) %s: MD failed with error 0x%x\n",uVar6,
                                       "esp-x509-crt-bundle",-iVar9);
                      FUN_ram_4817707c(auStack_78);
                    }
                  }
                }
              }
              else {
                uVar6 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle",
                                 "E (%lu) %s: PK parse failed with error 0x%x\n",uVar6,
                                 "esp-x509-crt-bundle",-iVar9);
                FUN_ram_4817707c(auStack_78);
              }
              uVar6 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle",
                               "E (%lu) %s: Certificate matched but signature verification failed\n"
                               ,uVar6,"esp-x509-crt-bundle");
              goto LAB_ram_4812cac0;
            }
            if (-1 < iVar5) break;
            iVar11 = iVar3 + -1;
            iVar3 = (iVar12 + iVar11) / 2;
            if (iVar11 < iVar12) goto LAB_ram_4812ca98;
          }
          iVar12 = iVar3 + 1;
          iVar3 = (iVar12 + iVar11) / 2;
        } while (iVar12 <= iVar11);
      }
    }
LAB_ram_4812ca98:
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"esp-x509-crt-bundle",
                     "I (%lu) %s: No matching trusted root certificate found\n",uVar6,
                     "esp-x509-crt-bundle");
LAB_ram_4812cac0:
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-x509-crt-bundle","E (%lu) %s: Failed to verify certificate\n",uVar6,
                     "esp-x509-crt-bundle");
    uVar6 = 0xffffd900;
  }
  return uVar6;
}


