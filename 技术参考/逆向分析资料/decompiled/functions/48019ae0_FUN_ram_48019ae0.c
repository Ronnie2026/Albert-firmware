/* Firmware entry: 0x48019ae0 */

undefined4 FUN_ram_48019ae0(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  code *pcVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_evt","E (%lu) %s: NULL rpc event or App struct\n\n",uVar4,"rpc_evt");
    goto LAB_ram_48019e7c;
  }
  *param_2 = 3;
  uVar11 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 8) = 0;
  *(short *)(param_2 + 2) = (short)uVar11;
  iVar3 = DAT_ram_4ff6db94;
  puVar1 = PTR_PTR_ram_4ff47e40;
  if (uVar11 == 0x308) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if ((iVar3 != 0) && (iVar14 = *(int *)(iVar3 + 0x10), iVar14 != 0)) {
      iVar3 = *(int *)(iVar3 + 0xc);
      *(int *)(param_2 + 8) = iVar3;
      if (iVar3 != 0) {
        return 0;
      }
      if (*(int *)(iVar14 + 0x10) == 0) {
LAB_ram_4801a2f2:
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_evt","E (%lu) %s: NULL SSID\n\n",uVar4,"rpc_evt");
        goto LAB_ram_48019e7c;
      }
      (**(code **)PTR_PTR_ram_4ff47e40)
                (param_2 + 0x10,*(int *)(iVar14 + 0x10),*(undefined4 *)(iVar14 + 0xc),param_4,0x308,
                 *(code **)PTR_PTR_ram_4ff47e40);
      param_2[0x30] = (char)*(undefined4 *)(iVar14 + 0x14);
      if (*(int *)(iVar14 + 0x1c) != 0) {
        (**(code **)PTR_PTR_ram_4ff47e40)
                  (param_2 + 0x31,*(int *)(iVar14 + 0x1c),*(undefined4 *)(iVar14 + 0x18));
        param_2[0x37] = (char)*(undefined4 *)(iVar14 + 0x20);
        param_2[0x38] = (char)*(undefined4 *)(iVar14 + 0x24);
        return 0;
      }
LAB_ram_4801a2c4:
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_evt","E (%lu) %s: NULL BSSID\n\n",uVar4,"rpc_evt");
      goto LAB_ram_48019e7c;
    }
  }
  else if (uVar11 < 0x309) {
    if (uVar11 == 0x304) {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 != 0) {
        iVar14 = *(int *)(iVar3 + 0xc);
        *(int *)(param_2 + 8) = iVar14;
        if (iVar14 != 0) {
LAB_ram_4801a010:
          param_2[0x16] = (char)*(undefined4 *)(iVar3 + 0x18);
          uVar4 = *(undefined4 *)(iVar3 + 0x20);
          param_2[0x17] = *(int *)(iVar3 + 0x1c) != 0;
          *(short *)(param_2 + 0x18) = (short)uVar4;
          return 0;
        }
        if (*(int *)(iVar3 + 0x14) != 0) {
          (**(code **)PTR_PTR_ram_4ff47e40)
                    (param_2 + 0x10,*(int *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x10),param_4,
                     0x304,*(code **)PTR_PTR_ram_4ff47e40);
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"rpc_evt",
                           "I (%lu) %s: EVENT: AP ->  sta DISconnected mac[%02x:%02x:%02x:%02x:%02x:%02x] (len:%u)\n"
                           ,uVar4,"rpc_evt",param_2[0x10],param_2[0x11],param_2[0x12],param_2[0x13],
                           param_2[0x14],param_2[0x15],*(undefined4 *)(iVar3 + 0x10));
          goto LAB_ram_4801a010;
        }
LAB_ram_4801a296:
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_evt","E (%lu) %s: NULL mac\n\n",uVar4,"rpc_evt");
        goto LAB_ram_48019e7c;
      }
    }
    else if (uVar11 < 0x305) {
      if (uVar11 == 0x302) {
        if (*(int *)(param_1 + 0x1c) != 0) {
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
          return 0;
        }
      }
      else {
        if (uVar11 != 0x303) {
          if (uVar11 == 0x301) {
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVENT: ESP INIT\n\n",uVar4,"rpc_evt");
            return 0;
          }
LAB_ram_48019e4e:
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_evt","E (%lu) %s: Invalid/unsupported event[%u] received\n\n",
                           uVar4,"rpc_evt",*(undefined4 *)(param_1 + 0x10));
          goto LAB_ram_48019e7c;
        }
        iVar3 = *(int *)(param_1 + 0x1c);
        if (iVar3 != 0) {
          iVar14 = *(int *)(iVar3 + 0xc);
          *(int *)(param_2 + 8) = iVar14;
          if (iVar14 != 0) {
LAB_ram_48019eee:
            param_2[0x16] = (char)*(undefined4 *)(iVar3 + 0x18);
            param_2[0x17] = *(int *)(iVar3 + 0x1c) != 0;
            return 0;
          }
          if (*(int *)(iVar3 + 0x14) != 0) {
            (**(code **)PTR_PTR_ram_4ff47e40)
                      (param_2 + 0x10,*(int *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x10),param_4,
                       0x303,*(code **)PTR_PTR_ram_4ff47e40);
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_evt",
                             "I (%lu) %s: EVENT: AP ->  sta connected mac[%02x:%02x:%02x:%02x:%02x:%02x] (len:%u)\n"
                             ,uVar4,"rpc_evt",param_2[0x10],param_2[0x11],param_2[0x12],
                             param_2[0x13],param_2[0x14],param_2[0x15],*(undefined4 *)(iVar3 + 0x10)
                            );
            goto LAB_ram_48019eee;
          }
          goto LAB_ram_4801a296;
        }
      }
    }
    else {
      if (uVar11 == 0x306) {
        iVar3 = *(int *)(param_1 + 0x1c);
        if (iVar3 != 0) {
          *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 0xc);
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: Event Scan Done, %lu items\n",uVar4,"rpc_evt",
                           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x10));
          iVar3 = *(int *)(iVar3 + 0x10);
          uVar4 = *(undefined4 *)(iVar3 + 0xc);
          param_2[0x14] = (char)*(undefined4 *)(iVar3 + 0x10);
          uVar13 = *(undefined4 *)(iVar3 + 0x14);
          *(undefined4 *)(param_2 + 0x10) = uVar4;
          param_2[0x15] = (char)uVar13;
          return 0;
        }
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_evt","E (%lu) %s: Failed to process rx data\n\n",uVar4,"rpc_evt");
        goto LAB_ram_48019e7c;
      }
      if (uVar11 == 0x307) {
        iVar3 = *(int *)(param_1 + 0x1c);
        if ((iVar3 != 0) && (iVar14 = *(int *)(iVar3 + 0x10), iVar14 != 0)) {
          iVar3 = *(int *)(iVar3 + 0xc);
          *(int *)(param_2 + 8) = iVar3;
          if (iVar3 != 0) {
            return 0;
          }
          if (*(int *)(iVar14 + 0x10) == 0) goto LAB_ram_4801a2f2;
          (**(code **)PTR_PTR_ram_4ff47e40)
                    (param_2 + 0x10,*(int *)(iVar14 + 0x10),*(undefined4 *)(iVar14 + 0xc),param_4,
                     0x307,*(code **)PTR_PTR_ram_4ff47e40);
          param_2[0x30] = (char)*(undefined4 *)(iVar14 + 0x14);
          if (*(int *)(iVar14 + 0x1c) != 0) {
            (**(code **)PTR_PTR_ram_4ff47e40)
                      (param_2 + 0x31,*(int *)(iVar14 + 0x1c),*(undefined4 *)(iVar14 + 0x18));
            param_2[0x37] = (char)*(undefined4 *)(iVar14 + 0x20);
            uVar4 = *(undefined4 *)(iVar14 + 0x28);
            *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(iVar14 + 0x24);
            *(short *)(param_2 + 0x3c) = (short)uVar4;
            return 0;
          }
          goto LAB_ram_4801a2c4;
        }
      }
      else if (*(int *)(param_1 + 0x1c) != 0) {
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: Event [0x%lx] received\n",uVar4,"rpc_evt",
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10));
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
        *(int *)(param_2 + 0x10) = iVar3;
        if (iVar3 == 5) {
          uVar4 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi Disconnected\n",uVar4,"rpc_evt")
          ;
          return 0;
        }
        if (iVar3 < 6) {
          if (iVar3 == 2) {
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi Start\n",uVar4,"rpc_evt");
            return 0;
          }
          if (2 < iVar3) {
            if (iVar3 != 3) {
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi Connected\n",uVar4,"rpc_evt"
                              );
              return 0;
            }
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi Stop\n",uVar4,"rpc_evt");
            return 0;
          }
          if (iVar3 == 0) {
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi Ready\n",uVar4,"rpc_evt");
            return 0;
          }
          if (iVar3 == 1) {
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi scan done\n",uVar4,"rpc_evt");
            return 0;
          }
        }
        else {
          if (iVar3 == 0xd) {
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi AP stop\n",uVar4,"rpc_evt");
            return 0;
          }
          if (iVar3 < 0xe) {
            if (iVar3 == 6) {
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi AuthMode change\n",uVar4,
                               "rpc_evt");
              return 0;
            }
            if (iVar3 == 0xc) {
              uVar4 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi AP Start\n",uVar4,"rpc_evt")
              ;
              return 0;
            }
          }
          else if (iVar3 == 0x2b) {
            uVar4 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi Home channel change\n",uVar4,
                             "rpc_evt");
            return 0;
          }
        }
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: EVT rcvd: Wi-Fi Event[%ld] ignored\n",uVar4,
                         "rpc_evt",*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10));
        return 0;
      }
    }
  }
  else if (uVar11 == 0x30c) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != 0) {
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      uVar13 = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(param_2 + 0x10) = uVar4;
      param_2[0x14] = (char)uVar13;
      puVar5 = memset(param_2 + 0x18,0,0x20);
      uVar9 = *(uint *)(iVar3 + 0x18);
      uVar11 = uVar9;
      if (8 < uVar9) {
        uVar11 = 8;
      }
      if (uVar9 == 0) {
        return 0;
      }
      puVar10 = *(undefined4 **)(iVar3 + 0x1c);
      uVar9 = 0;
      do {
        uVar4 = *puVar10;
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 1;
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while (uVar9 < uVar11);
      return 0;
    }
  }
  else if (uVar11 < 0x30d) {
    if (uVar11 == 0x30a) {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 != 0) {
        iVar14 = *(int *)(iVar3 + 0x10);
        uVar18 = *(undefined4 *)(iVar3 + 0xc);
        uVar7 = *(undefined4 *)(iVar14 + 0x10);
        uVar19 = *(undefined4 *)(iVar14 + 0xc);
        param_2[0x16] = (char)*(undefined4 *)(iVar14 + 0x14);
        uVar17 = *(undefined4 *)(iVar14 + 0x18);
        uVar4 = *(undefined4 *)(iVar14 + 0x1c);
        uVar16 = *(undefined4 *)(iVar14 + 0x20);
        uVar15 = *(undefined4 *)(iVar3 + 0x14);
        param_2[0x24] = (char)*(undefined4 *)(iVar3 + 0x18);
        uVar13 = *(undefined4 *)(iVar3 + 0x20);
        uVar6 = *(undefined4 *)(iVar3 + 0x24);
        *(undefined4 *)(param_2 + 0x10) = uVar19;
        *(undefined4 *)(param_2 + 8) = uVar18;
        *(ushort *)(param_2 + 0x14) = (ushort)uVar7 & 0x7ff | *(ushort *)(param_2 + 0x14) & 0xf800;
        *(short *)(param_2 + 0x18) = (short)uVar17;
        *(short *)(param_2 + 0x1a) = (short)uVar4;
        *(short *)(param_2 + 0x1c) = (short)uVar16;
        *(undefined4 *)(param_2 + 0x20) = uVar15;
        *(undefined4 *)(param_2 + 0x28) = uVar13;
        *(undefined4 *)(param_2 + 0x2c) = uVar6;
        return 0;
      }
    }
    else if (uVar11 == 0x30b) {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 != 0) {
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
        param_2[0x10] = (char)*(undefined4 *)(iVar3 + 0x10);
        uVar13 = *(undefined4 *)(iVar3 + 0x14);
        *(undefined4 *)(param_2 + 8) = uVar4;
        *(undefined4 *)(param_2 + 0x14) = uVar13;
        return 0;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 != 0) {
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 0x40);
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar13 = *(undefined4 *)(iVar3 + 0x14);
        uVar6 = *(undefined4 *)(iVar3 + 0x30);
        uVar7 = *(undefined4 *)(iVar3 + 0x3c);
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(param_2 + 0x14) = uVar4;
        *(undefined4 *)(param_2 + 0x18) = uVar13;
        uVar13 = *(undefined4 *)(iVar3 + 0x18);
        pcVar12 = *(code **)puVar1;
        uVar4 = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined4 *)(param_2 + 0xdc) = uVar6;
        *(undefined4 *)(param_2 + 0x120) = uVar7;
        (*pcVar12)(param_2 + 0x1c,uVar4,uVar13,uVar6,uVar7,pcVar12);
        (**(code **)PTR_PTR_ram_4ff47e40)
                  (param_2 + 0x5c,*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x20));
        (**(code **)PTR_PTR_ram_4ff47e40)
                  (param_2 + 0x9c,*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x28));
        (**(code **)PTR_PTR_ram_4ff47e40)
                  (param_2 + 0xe0,*(undefined4 *)(iVar3 + 0x38),*(undefined4 *)(iVar3 + 0x34));
        return 0;
      }
    }
  }
  else if (uVar11 == 0x30d) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != 0) {
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      uVar13 = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(param_2 + 0x10) = uVar4;
      param_2[0x14] = (char)uVar13;
      return 0;
    }
  }
  else {
    if (uVar11 != 0x314) goto LAB_ram_48019e4e;
    iVar14 = *(int *)(param_1 + 0x1c);
    if (iVar14 != 0) {
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar14 + 0xc);
      iVar2 = *(int *)(iVar14 + 0x10);
      uVar4 = *(undefined4 *)(iVar14 + 0x18);
      uVar13 = *(undefined4 *)(iVar14 + 0x14);
      if (iVar3 != 0) {
        (**(code **)(PTR_PTR_ram_4ff47e40 + 0x58))(iVar3,0xffffffff);
        piVar8 = &DAT_ram_4ff48504;
        do {
          if ((iVar2 == *piVar8) && (pcVar12 = (code *)piVar8[1], pcVar12 != (code *)0x0)) {
            (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6db94);
            (*pcVar12)(iVar2,uVar4,uVar13);
            return 0;
          }
          piVar8 = piVar8 + 2;
        } while (piVar8 != (int *)0x4ff4851c);
        (**(code **)(PTR_PTR_ram_4ff47e40 + 0x50))(DAT_ram_4ff6db94);
      }
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"rpc_evt","I (%lu) %s: No callback registered for message ID %lu, ignore\n"
                       ,uVar4,"rpc_evt",iVar2);
      return 0;
    }
  }
  uVar4 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"rpc_evt","E (%lu) %s: Failed to process rx data\n\n",uVar4,"rpc_evt");
LAB_ram_48019e7c:
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  return 0xffffffff;
}


