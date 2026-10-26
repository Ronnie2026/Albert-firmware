/* Firmware entry: 0x4801af88 */

int FUN_ram_4801af88(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return -1;
  }
  if (*param_1 == '\x02') {
    uVar5 = (uint)*(ushort *)(param_1 + 2);
    uVar3 = uVar5 - 0x200 & 0xffff;
    if (uVar3 < 0x85) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 0) {
        if (iVar1 == 0x2f0b) {
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Error reported: Failed to set aync callback\n",
                           uVar2,"RPC_WRAP");
          goto LAB_ram_4801b022;
        }
        if (iVar1 < 0x2f0c) {
          if (iVar1 == 0x2f08) {
            uVar2 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"RPC_WRAP",
                             "E (%lu) %s: Error reported: Invalid or out of range parameter values\n"
                             ,uVar2,"RPC_WRAP");
            goto LAB_ram_4801b022;
          }
          if (0x2f08 < iVar1) {
            if (iVar1 == 0x2f09) {
              uVar2 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Error reported: Protobuf encode failed\n",
                               uVar2,"RPC_WRAP");
            }
            else {
              uVar2 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Error reported: Protobuf decode failed\n",
                               uVar2,"RPC_WRAP");
              iVar1 = 0x2f0a;
            }
            goto LAB_ram_4801b022;
          }
          if (iVar1 == 0x2f06) {
            uVar2 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Error reported: Memory allocation failed\n",
                             uVar2,"RPC_WRAP");
            goto LAB_ram_4801b022;
          }
          if (iVar1 == 0x2f07) {
            uVar2 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Error reported: Unsupported control msg\n",
                             uVar2,"RPC_WRAP");
            goto LAB_ram_4801b022;
          }
        }
        else {
          if (iVar1 == 0x2f0e) {
            uVar2 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"RPC_WRAP",
                             "E (%lu) %s: Error reported: Command In progress, Please wait\n",uVar2,
                             "RPC_WRAP");
            goto LAB_ram_4801b022;
          }
          if (iVar1 < 0x2f0f) {
            if (iVar1 == 0x2f0c) {
              uVar2 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"RPC_WRAP",
                               "E (%lu) %s: Error reported: Problem while sending data on serial driver\n"
                               ,uVar2,"RPC_WRAP");
            }
            else {
              uVar2 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Error reported: Response Timeout\n",uVar2,
                               "RPC_WRAP");
              iVar1 = 0x2f0d;
            }
            goto LAB_ram_4801b022;
          }
          if (iVar1 == 0x2f0f) {
            uVar2 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Error reported: Failed to set sync sem\n",
                             uVar2,"RPC_WRAP");
            goto LAB_ram_4801b022;
          }
        }
        if (uVar5 - 0x210 < 3) {
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: OTA procedure failed\n",uVar2,"RPC_WRAP");
        }
        goto LAB_ram_4801b022;
      }
      if (uVar5 == 0x221) {
        iVar4 = *(int *)(param_1 + 0x10);
        if (iVar4 == 0) goto LAB_ram_4801b022;
        if (*(int *)(param_1 + 0x14) != 0) {
          if (0 < iVar4) {
            uVar3 = 0;
            do {
              uVar3 = uVar3 + 1 & 0xffff;
            } while ((int)uVar3 < iVar4);
          }
          goto LAB_ram_4801b022;
        }
      }
      else {
        if (uVar5 < 0x222) {
          if (uVar5 < 0x20c) {
            if (0x209 < uVar5) goto LAB_ram_4801b022;
joined_r0x4801b0b8:
            if (uVar3 < 5) goto LAB_ram_4801b022;
          }
          else if ((uVar5 - 0x20e & 0xffff) < 0x13) goto LAB_ram_4801b022;
        }
        else if (uVar5 < 0x261) {
          if (uVar5 < 0x245) {
            if (uVar5 < 0x231) {
              if (0x228 < uVar5) goto LAB_ram_4801b022;
              uVar3 = uVar5 - 0x222 & 0xffff;
              goto joined_r0x4801b0b8;
            }
            if ((uVar5 - 0x237 & 0xffff) < 3) goto LAB_ram_4801b022;
          }
          else if ((0xfff6603U >> (uVar5 - 0x245 & 0x1f) & 1) != 0) goto LAB_ram_4801b022;
        }
        else if ((uVar5 - 0x262 & 0xffff) < 0x23) goto LAB_ram_4801b022;
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Invalid Response[0x%x] to parse\n",uVar2,
                         "RPC_WRAP",*(undefined2 *)(param_1 + 2));
      }
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Response Msg ID[0x%x] is not correct\n",uVar2,
                       "RPC_WRAP",*(undefined2 *)(param_1 + 2));
    }
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"RPC_WRAP","E (%lu) %s: Recvd Msg[0x%x] is not response\n",uVar2,"RPC_WRAP",
                     *param_1);
  }
  iVar1 = -1;
LAB_ram_4801b022:
  if ((*(int *)(param_1 + 0x134) != 0) && (*(code **)(param_1 + 0x138) != (code *)0x0)) {
    (**(code **)(param_1 + 0x138))();
    param_1[0x134] = '\0';
    param_1[0x135] = '\0';
    param_1[0x136] = '\0';
    param_1[0x137] = '\0';
  }
  (**(code **)(PTR_PTR_ram_4ff47e40 + 0x10))(param_1);
  return iVar1;
}


