/* Firmware entry: 0x4801610e */

undefined4 FUN_ram_4801610e(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: NULL rpc resp or NULL App Resp\n",uVar5,"rpc_rsp");
    return 0;
  }
  *param_2 = 2;
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 4) = uVar5;
  uVar5 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"rpc_rsp","I (%lu) %s:  --> RPC_Resp [0x%x], uid %ld\n",uVar5,"rpc_rsp",
                   *(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
  uVar6 = *(uint *)(param_1 + 0x10);
  if (uVar6 == 0x253) {
    iVar9 = *(int *)(param_1 + 0x1c);
    if (iVar9 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
      return 0;
    }
    if (*(int *)(iVar9 + 0xc) != 0) {
      *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_rsp",
                       "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                       "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
      return 0;
    }
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
    goto LAB_ram_480164fa;
  }
  if (0x253 < uVar6) {
    if (uVar6 == 0x26d) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else if (uVar6 < 0x26e) {
      if (uVar6 == 0x260) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x261) {
        if (uVar6 == 0x25a) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else if (uVar6 < 0x25b) {
          if (uVar6 == 599) {
            iVar9 = *(int *)(param_1 + 0x1c);
            if (iVar9 == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            if (*(int *)(iVar9 + 0xc) != 0) {
              *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
            uVar5 = *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0xc);
            uVar10 = *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x10);
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
            *(short *)(param_2 + 0x14) = (short)uVar5;
            *(short *)(param_2 + 0x16) = (short)uVar10;
          }
          else if (uVar6 < 600) {
            if (uVar6 == 0x255) {
              iVar9 = *(int *)(param_1 + 0x1c);
              if (iVar9 == 0) {
                uVar5 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                                 "rpc_rsp");
                return 0;
              }
              if (*(int *)(iVar9 + 0xc) != 0) {
                *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
                uVar5 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(2,"rpc_rsp",
                                 "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n"
                                 ,uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                                 *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
                return 0;
              }
              *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
            }
            else {
              if (uVar6 != 0x256) goto LAB_ram_48017a46;
              iVar9 = *(int *)(param_1 + 0x1c);
              if (iVar9 == 0) {
                uVar5 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                                 "rpc_rsp");
                return 0;
              }
              if (*(int *)(iVar9 + 0xc) != 0) {
                *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
                uVar5 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(2,"rpc_rsp",
                                 "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n"
                                 ,uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                                 *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
                return 0;
              }
              *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
            }
          }
          else if (uVar6 == 600) {
            iVar9 = *(int *)(param_1 + 0x1c);
            if (iVar9 == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            if (*(int *)(iVar9 + 0xc) != 0) {
              *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
          }
          else {
            iVar9 = *(int *)(param_1 + 0x1c);
            if (iVar9 == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            if (*(int *)(iVar9 + 0xc) != 0) {
              *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
            uVar5 = *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0xc);
            uVar10 = *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x10);
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
            *(undefined4 *)(param_2 + 0x14) = uVar5;
            *(undefined4 *)(param_2 + 0x18) = uVar10;
          }
        }
        else if (uVar6 == 0x25d) {
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0xc) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
        }
        else if (uVar6 < 0x25e) {
          if (uVar6 == 0x25b) {
            iVar9 = *(int *)(param_1 + 0x1c);
            if (iVar9 == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            if (*(int *)(iVar9 + 0xc) != 0) {
              *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
          }
          else {
            if (*(int *)(param_1 + 0x1c) == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
            if (iVar9 != 0) {
              *(int *)(param_2 + 8) = iVar9;
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
          }
        }
        else if (uVar6 == 0x25e) {
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0xc) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          uVar5 = *(undefined4 *)(iVar9 + 0x14);
          uVar10 = *(undefined4 *)(iVar9 + 0x18);
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
          *(undefined4 *)(param_2 + 0x14) = uVar5;
          *(undefined4 *)(param_2 + 0x18) = uVar10;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0xc) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          FUN_ram_4801600e(param_2 + 0x10,*(undefined4 *)(iVar9 + 0x10));
        }
      }
      else if (uVar6 == 0x267) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x268) {
        if (uVar6 == 0x264) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else if (uVar6 < 0x265) {
          if (uVar6 == 0x262) {
            if (*(int *)(param_1 + 0x1c) == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
            if (iVar9 != 0) {
              *(int *)(param_2 + 8) = iVar9;
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
          }
          else {
            if (uVar6 != 0x263) goto LAB_ram_48017a46;
            if (*(int *)(param_1 + 0x1c) == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
            if (iVar9 != 0) {
              *(int *)(param_2 + 8) = iVar9;
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
          }
        }
        else if (uVar6 == 0x265) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else {
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0xc) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
        }
      }
      else if (uVar6 == 0x26a) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x26b) {
        if (uVar6 == 0x268) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
      }
      else if (uVar6 == 0x26b) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
    }
    else if (uVar6 == 0x279) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else if (uVar6 < 0x27a) {
      if (uVar6 == 0x273) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x274) {
        if (uVar6 == 0x270) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else if (uVar6 < 0x271) {
          if (uVar6 == 0x26e) {
            if (*(int *)(param_1 + 0x1c) == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
            if (iVar9 != 0) {
              *(int *)(param_2 + 8) = iVar9;
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
          }
          else {
            if (*(int *)(param_1 + 0x1c) == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
            if (iVar9 != 0) {
              *(int *)(param_2 + 8) = iVar9;
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
          }
        }
        else if (uVar6 == 0x271) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
      }
      else if (uVar6 == 0x276) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x277) {
        if (uVar6 == 0x274) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
      }
      else if (uVar6 == 0x277) {
        iVar9 = *(int *)(param_1 + 0x1c);
        if (iVar9 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
        param_2[0x10] = *(int *)(iVar9 + 0x10) != 0;
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
    }
    else if (uVar6 == 0x27f) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else if (uVar6 < 0x280) {
      if (uVar6 == 0x27c) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x27d) {
        if (uVar6 == 0x27a) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
      }
      else if (uVar6 == 0x27d) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
    }
    else if (uVar6 == 0x282) {
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
      uVar5 = *(undefined4 *)(iVar9 + 0x14);
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar9 + 0x10);
      *(undefined4 *)(param_2 + 0x10) = uVar5;
    }
    else if (uVar6 < 0x283) {
      if (uVar6 == 0x280) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else {
        iVar9 = *(int *)(param_1 + 0x1c);
        if (iVar9 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
        if ((*(int *)(iVar9 + 0x1c) != 0) && (*(int *)(iVar9 + 0x18) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x1c);
        }
      }
    }
    else if (uVar6 == 0x283) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else {
      if (uVar6 != 0x284) goto LAB_ram_48017a46;
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
      iVar3 = *(int *)(iVar9 + 0x18);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
      if ((iVar3 != 0) && (*(int *)(iVar9 + 0x14) != 0)) {
        iVar9 = (**(code **)(PTR_PTR_ram_4ff47e40 + 8))();
        *(int *)(param_2 + 0x14) = iVar9;
        if (iVar9 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Malloc Failed\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        (**(code **)PTR_PTR_ram_4ff47e40)
                  (iVar9,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14));
        uVar5 = *(undefined4 *)(PTR_PTR_ram_4ff47e40 + 0x10);
        *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14);
        *(undefined4 *)(param_2 + 0x1c) = uVar5;
      }
    }
    goto LAB_ram_480164fa;
  }
  if (uVar6 == 0x21f) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
      return 0;
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if (iVar9 != 0) {
      *(int *)(param_2 + 8) = iVar9;
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_rsp",
                       "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                       "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
      return 0;
    }
    goto LAB_ram_480164fa;
  }
  if (uVar6 < 0x220) {
    if (uVar6 == 0x213) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else if (uVar6 < 0x214) {
      if (uVar6 == 0x20b) {
        iVar9 = *(int *)(param_1 + 0x1c);
        if (iVar9 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
        iVar9 = *(int *)(iVar9 + 0x10);
        if (iVar9 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        uVar5 = *(undefined4 *)(iVar9 + 0x10);
        iVar3 = *(int *)(iVar9 + 0x20);
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0xc);
        *(undefined4 *)(param_2 + 0x14) = uVar5;
        if ((iVar3 != 0) && (*(int *)(iVar9 + 0x1c) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x20);
        }
        if ((*(int *)(iVar9 + 0x28) != 0) && (*(int *)(iVar9 + 0x24) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x40);
        }
        if ((*(int *)(iVar9 + 0x30) != 0) && (*(int *)(iVar9 + 0x2c) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x60);
        }
        if ((*(int *)(iVar9 + 0x38) != 0) && (*(int *)(iVar9 + 0x34) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x70);
        }
        if ((*(int *)(iVar9 + 0x40) != 0) && (*(int *)(iVar9 + 0x3c) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x80);
        }
        if ((*(int *)(iVar9 + 0x48) != 0) && (*(int *)(iVar9 + 0x44) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0xa0);
        }
        uVar5 = *(undefined4 *)(iVar9 + 0x50);
        uVar10 = *(undefined4 *)(iVar9 + 0x54);
        *(short *)(param_2 + 0xc0) = (short)*(undefined4 *)(iVar9 + 0x4c);
        *(short *)(param_2 + 0xc2) = (short)uVar5;
        param_2[0xc4] = (char)uVar10;
      }
      else if (uVar6 < 0x20c) {
        if (uVar6 == 0x203) {
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0x10) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0x10);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0xc);
        }
        else if (uVar6 < 0x204) {
          if (uVar6 == 0x201) {
            iVar9 = *(int *)(param_1 + 0x1c);
            if (iVar9 == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            if (*(int *)(iVar9 + 0x14) != 0) {
              *(int *)(param_2 + 8) = *(int *)(iVar9 + 0x14);
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
            if (*(int *)(iVar9 + 0x10) == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            if (*(int *)(iVar9 + 0xc) != 0) {
              (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x14);
            }
          }
          else {
            if (uVar6 != 0x202) {
              if (uVar6 == 0x200) {
                *(undefined4 *)(param_2 + 8) = 0x106;
                return 0;
              }
              goto LAB_ram_48017a46;
            }
            if (*(int *)(param_1 + 0x1c) == 0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,
                               "rpc_rsp");
              return 0;
            }
            iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
            if (iVar9 != 0) {
              *(int *)(param_2 + 8) = iVar9;
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(2,"rpc_rsp",
                               "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                               uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                               *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
              return 0;
            }
          }
        }
        else if (uVar6 == 0x204) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else {
          if (uVar6 != 0x20a) goto LAB_ram_48017a46;
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
      }
      else if (uVar6 == 0x210) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x211) {
        if (uVar6 == 0x20e) {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
        else {
          if (uVar6 != 0x20f) goto LAB_ram_48017a46;
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0xc) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
        }
      }
      else if (uVar6 == 0x211) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
    }
    else if (uVar6 == 0x219) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else if (uVar6 < 0x21a) {
      if (uVar6 == 0x216) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x217) {
        if (uVar6 == 0x214) {
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0x10) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0x10);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0xc);
        }
        else {
          if (*(int *)(param_1 + 0x1c) == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
          if (iVar9 != 0) {
            *(int *)(param_2 + 8) = iVar9;
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
        }
      }
      else if (uVar6 == 0x217) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
    }
    else if (uVar6 == 0x21c) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else if (uVar6 < 0x21d) {
      if (uVar6 == 0x21a) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
    }
    else if (uVar6 == 0x21d) {
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
      cVar1 = *(char *)(iVar9 + 0x10);
      param_2[0x10] = cVar1;
      if (cVar1 == '\0') {
        FUN_ram_4801a320(param_2 + 0x14,*(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x10));
      }
      else if (cVar1 == '\x01') {
        iVar9 = *(int *)(*(int *)(iVar9 + 0x14) + 0x10);
        if ((*(int *)(iVar9 + 0x10) != 0) && (*(int *)(iVar9 + 0xc) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x14);
        }
        if ((*(int *)(iVar9 + 0x18) != 0) && (*(int *)(iVar9 + 0x14) != 0)) {
          (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x34);
        }
        param_2[0x74] = (char)*(undefined4 *)(iVar9 + 0x1c);
        param_2[0x75] = (char)*(undefined4 *)(iVar9 + 0x20);
        uVar5 = *(undefined4 *)(iVar9 + 0x24);
        param_2[0x7c] = (char)*(undefined4 *)(iVar9 + 0x28);
        uVar10 = *(undefined4 *)(iVar9 + 0x2c);
        *(undefined4 *)(param_2 + 0x78) = uVar5;
        param_2[0x7d] = (char)uVar10;
        uVar5 = *(undefined4 *)(iVar9 + 0x30);
        param_2[0x80] = (char)*(undefined4 *)(iVar9 + 0x44);
        uVar10 = *(undefined4 *)(iVar9 + 0x48);
        *(short *)(param_2 + 0x7e) = (short)uVar5;
        param_2[0x81] = (char)uVar10;
        uVar5 = *(undefined4 *)(iVar9 + 0x34);
        iVar3 = *(int *)(iVar9 + 0x3c);
        param_2[0x88] = *(int *)(iVar9 + 0x38) != 0;
        *(undefined4 *)(param_2 + 0x84) = uVar5;
        if (iVar3 != 0) {
          iVar11 = *(int *)(iVar3 + 0x10);
          param_2[0x89] = *(int *)(iVar3 + 0xc) != 0;
          param_2[0x8a] = iVar11 != 0;
        }
        uVar5 = *(undefined4 *)(iVar9 + 0x40);
        param_2[0x90] = (char)*(undefined4 *)(iVar9 + 0x4c);
        uVar10 = *(undefined4 *)(iVar9 + 0x50);
        *(undefined4 *)(param_2 + 0x8c) = uVar5;
        param_2[0x91] = (char)uVar10;
        iVar3 = *(int *)(iVar9 + 0x54);
        if (iVar3 != 0) {
          uVar5 = *(undefined4 *)(iVar3 + 0xc);
          param_2[0x94] = *(int *)(iVar3 + 0x10) != 0;
          *(short *)(param_2 + 0x92) = (short)uVar5;
        }
        *(short *)(param_2 + 0x96) = (short)*(undefined4 *)(iVar9 + 0x58);
      }
      else {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Unsupported WiFi interface[%u]\n",uVar5,"rpc_rsp",
                         param_2[0x10]);
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    goto LAB_ram_480164fa;
  }
  if (uVar6 == 0x22d) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
      return 0;
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if (iVar9 != 0) {
      *(int *)(param_2 + 8) = iVar9;
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_rsp",
                       "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                       "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
      return 0;
    }
    goto LAB_ram_480164fa;
  }
  if (uVar6 < 0x22e) {
    if (uVar6 == 0x225) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else if (uVar6 < 0x226) {
      if (uVar6 == 0x222) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else if (uVar6 < 0x223) {
        if (uVar6 == 0x220) {
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0xc) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x1c);
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          if (*(int *)(iVar9 + 0xc) != 0) {
            *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(2,"rpc_rsp",
                             "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",
                             uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),
                             *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
            return 0;
          }
          iVar3 = *(int *)(iVar9 + 0x10);
          iVar9 = *(int *)(iVar9 + 0x18);
          *(int *)(param_2 + 0x10) = iVar3;
          if (iVar3 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(3,"rpc_rsp","I (%lu) %s: No AP found\n",uVar5,"rpc_rsp");
            return 0;
          }
          if (iVar9 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp"
                            );
            return 0;
          }
          iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(iVar3,0x5c);
          *(int *)(param_2 + 0x14) = iVar3;
          if (iVar3 == 0) {
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Malloc Failed\n\n",uVar5,"rpc_rsp");
            return 0;
          }
          uVar5 = *(undefined4 *)(PTR_PTR_ram_4ff47e40 + 0x10);
          *(int *)(param_2 + 0x134) = iVar3;
          *(undefined4 *)(param_2 + 0x138) = uVar5;
          if (0 < *(int *)(param_2 + 0x10)) {
            uVar6 = 0;
            do {
              iVar11 = uVar6 * 0x5c;
              iVar7 = uVar6 * 4;
              uVar6 = uVar6 + 1 & 0xffff;
              FUN_ram_4801600e(iVar11 + iVar3,*(undefined4 *)(iVar7 + iVar9));
            } while ((int)uVar6 < *(int *)(param_2 + 0x10));
          }
        }
      }
      else if (uVar6 == 0x223) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
    }
    else if (uVar6 == 0x22a) {
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
      param_2[0x14] = (char)*(undefined4 *)(iVar9 + 0x10);
    }
    else if (uVar6 < 0x22b) {
      if (uVar6 == 0x226) {
        iVar9 = *(int *)(param_1 + 0x1c);
        if (iVar9 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
        iVar9 = *(int *)(iVar9 + 0x10);
        *(undefined4 *)(param_2 + 0x10) = 1;
        if (iVar9 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar3 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0xc))(1,0x5c);
        *(int *)(param_2 + 0x14) = iVar3;
        if (iVar3 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Malloc Failed\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        uVar5 = *(undefined4 *)(PTR_PTR_ram_4ff47e40 + 0x10);
        *(int *)(param_2 + 0x134) = iVar3;
        *(undefined4 *)(param_2 + 0x138) = uVar5;
        FUN_ram_4801600e(iVar3,iVar9);
      }
      else {
        if (uVar6 != 0x229) goto LAB_ram_48017a46;
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
    }
    else if (uVar6 == 0x22b) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else {
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
      *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar9 + 0x10);
    }
    goto LAB_ram_480164fa;
  }
  if (uVar6 == 0x239) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
      return 0;
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if (iVar9 != 0) {
      *(int *)(param_2 + 8) = iVar9;
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_rsp",
                       "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                       "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
      return 0;
    }
    goto LAB_ram_480164fa;
  }
  if (0x239 < uVar6) {
    if (uVar6 == 0x24e) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    else if (uVar6 < 0x24f) {
      if (uVar6 == 0x245) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
        if (iVar9 != 0) {
          *(int *)(param_2 + 8) = iVar9;
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
      }
      else {
        if (uVar6 != 0x246) {
LAB_ram_48017a46:
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Unsupported rpc Resp[%u]\n",uVar5,"rpc_rsp",
                           *(undefined4 *)(param_1 + 0x10));
          return 0;
        }
        iVar9 = *(int *)(param_1 + 0x1c);
        if (iVar9 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
          return 0;
        }
        if (*(int *)(iVar9 + 0xc) != 0) {
          *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(2,"rpc_rsp",
                           "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5
                           ,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                           *(undefined4 *)(param_2 + 8));
          return 0;
        }
        *(short *)(param_2 + 0x14) = (short)*(undefined4 *)(iVar9 + 0x10);
      }
    }
    else if (uVar6 == 0x24f) {
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
      if ((*(int *)(iVar9 + 0x14) != 0) && (*(int *)(iVar9 + 0x10) != 0)) {
        (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x10);
      }
    }
    else {
      if (uVar6 != 0x252) goto LAB_ram_48017a46;
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
      *(short *)(param_2 + 0x10) = (short)*(undefined4 *)(iVar9 + 0x10);
    }
    goto LAB_ram_480164fa;
  }
  if (uVar6 == 0x230) {
    iVar9 = *(int *)(param_1 + 0x1c);
    if (iVar9 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
      return 0;
    }
    if (*(int *)(iVar9 + 0xc) != 0) {
      *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_rsp",
                       "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                       "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
      return 0;
    }
    if ((*(int *)(*(int *)(iVar9 + 0x10) + 0x10) != 0) &&
       (*(int *)(*(int *)(iVar9 + 0x10) + 0xc) != 0)) {
      (**(code **)PTR_PTR_ram_4ff47e40)(param_2 + 0x10);
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    iVar9 = *(int *)(iVar9 + 0x10);
    uVar5 = *(undefined4 *)(iVar9 + 0x18);
    uVar10 = *(undefined4 *)(iVar9 + 0x1c);
    uVar8 = *(undefined4 *)(iVar9 + 0x20);
    param_2[0x13] = (char)*(undefined4 *)(iVar9 + 0x14);
    param_2[0x14] = (char)uVar5;
    param_2[0x15] = (char)uVar10;
    *(undefined4 *)(param_2 + 0x18) = uVar8;
    goto LAB_ram_480164fa;
  }
  if (uVar6 < 0x231) {
    if (uVar6 == 0x22e) {
      iVar9 = *(int *)(param_1 + 0x1c);
      if (iVar9 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      if (*(int *)(iVar9 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
      uVar5 = *(undefined4 *)(iVar9 + 0x14);
      param_2[0x10] = (char)*(undefined4 *)(iVar9 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar5;
    }
    else {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
        return 0;
      }
      iVar9 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
      if (iVar9 != 0) {
        *(int *)(param_2 + 8) = iVar9;
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(2,"rpc_rsp",
                         "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                         "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
        return 0;
      }
    }
    goto LAB_ram_480164fa;
  }
  if (uVar6 != 0x237) {
    if (uVar6 != 0x238) goto LAB_ram_48017a46;
    iVar9 = *(int *)(param_1 + 0x1c);
    if (iVar9 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
      return 0;
    }
    if (*(int *)(iVar9 + 0xc) != 0) {
      *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"rpc_rsp",
                       "W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n",uVar5,
                       "rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
      return 0;
    }
    *(short *)(param_2 + 0x16) = (short)*(undefined4 *)(iVar9 + 0x10);
    goto LAB_ram_480164fa;
  }
  iVar9 = *(int *)(param_1 + 0x1c);
  if (iVar9 == 0) {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_rsp","E (%lu) %s: Failed to process rx data\n\n",uVar5,"rpc_rsp");
    return 0;
  }
  if (*(int *)(iVar9 + 0xc) != 0) {
    *(int *)(param_2 + 8) = *(int *)(iVar9 + 0xc);
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"rpc_rsp","W (%lu) %s: Hosted RPC_Resp [0x%hx], uid [%lu], resp code [%li]\n"
                     ,uVar5,"rpc_rsp",*(undefined2 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),
                     *(undefined4 *)(param_2 + 8));
    return 0;
  }
  uVar6 = *(uint *)(*(int *)(iVar9 + 0x10) + 0x14);
  if (uVar6 < 0xb) {
    piVar14 = *(int **)(*(int *)(iVar9 + 0x10) + 0x10);
    if (uVar6 != 0) goto LAB_ram_4801796e;
  }
  else {
    uVar5 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"rpc_rsp",
                     "W (%lu) %s: Slave returned %ld connected stations, but we can only accept %d items\n"
                     ,uVar5,"rpc_rsp",uVar6,10);
    piVar14 = *(int **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 0x10);
    uVar6 = 10;
LAB_ram_4801796e:
    puVar2 = param_2 + 0x10;
    uVar12 = 0;
    do {
      iVar9 = *piVar14;
      if ((*(int *)(iVar9 + 0x10) != 0) && (*(int *)(iVar9 + 0xc) != 0)) {
        (**(code **)PTR_PTR_ram_4ff47e40)(puVar2);
        iVar9 = *piVar14;
      }
      uVar4 = *(uint *)(iVar9 + 0x18);
      puVar2[6] = (char)*(undefined4 *)(iVar9 + 0x14);
      uVar13 = uVar12 + 1;
      param_2[uVar12 * 0xc + 0x1a] = 0;
      param_2[uVar12 * 0xc + 0x17] =
           (byte)uVar4 & 0xf | (byte)(uVar4 << 2) & 0x40 | (byte)((uVar4 >> 5) << 7) |
           param_2[uVar12 * 0xc + 0x17] & 0x30;
      param_2[uVar12 * 0xc + 0x18] = (char)(uVar4 >> 6);
      param_2[uVar12 * 0xc + 0x19] = (byte)((uVar4 >> 6) >> 8) & 3;
      piVar14 = piVar14 + 1;
      puVar2 = puVar2 + 0xc;
      uVar12 = uVar13;
    } while (uVar13 < uVar6);
    iVar9 = *(int *)(param_1 + 0x1c);
  }
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(*(int *)(iVar9 + 0x10) + 0x14);
LAB_ram_480164fa:
  *(undefined4 *)(param_2 + 8) = 0;
  return 0;
}


