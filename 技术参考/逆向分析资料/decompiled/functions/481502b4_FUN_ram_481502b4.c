/* Firmware entry: 0x481502b4 */

void FUN_ram_481502b4(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x3d3,
                     "lwip_netconn_do_close_internal","invalid conn");
  }
  if ((*param_1 & 0xf0) != 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x3d4,
                     "lwip_netconn_do_close_internal","this is for tcp netconns only");
  }
  if (param_1[1] != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x3d5,
                     "lwip_netconn_do_close_internal","conn must be in state NETCONN_CLOSE");
  }
  uVar3 = param_1[2];
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x3d6,
                     "lwip_netconn_do_close_internal","pcb already closed");
  }
  if (param_1[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x3d7,
                     "lwip_netconn_do_close_internal","conn->current_msg != NULL");
  }
  bVar1 = *(byte *)(param_1[0xd] + 8);
  if (bVar1 == 3) {
LAB_ram_481503d6:
    FUN_ram_4813c804(uVar3,0);
    if (*(int *)(uVar3 + 0x3c) == 1) {
LAB_ram_481503e6:
      FUN_ram_4813c8b8(uVar3,0);
      iVar5 = FUN_ram_4813d722(uVar3,1);
      bVar2 = true;
      if (iVar5 != 0) goto LAB_ram_48150358;
LAB_ram_481503fa:
      uVar4 = *(undefined4 *)(param_1[0xd] + 0x24);
      *(undefined1 *)(param_1[0xd] + 4) = 0;
    }
    else {
      FUN_ram_4813c80a(uVar3,0);
      FUN_ram_4813c8b8(uVar3,0);
      if ((bVar1 & 2) != 0) {
LAB_ram_48150336:
        FUN_ram_4813c844(uVar3,0);
      }
      FUN_ram_4813c8c8(uVar3,0,0);
      FUN_ram_4813c87e(uVar3,0);
      iVar5 = FUN_ram_4813d722(uVar3,1);
      bVar2 = true;
      if (iVar5 == 0) goto LAB_ram_481503fa;
LAB_ram_48150358:
      if (iVar5 != -1) {
        uVar3 = param_1[0xd];
        *(char *)(uVar3 + 4) = (char)iVar5;
        uVar4 = *(undefined4 *)(uVar3 + 0x24);
        param_1[0xd] = 0;
        param_1[1] = 0;
        goto LAB_ram_4815044e;
      }
      uVar7 = param_1[8];
      if ((int)uVar7 < 1) {
        iVar5 = thunk_FUN_ram_4ff3c5d4();
        uVar6 = param_1[0xd];
        if (iVar5 - *(int *)(uVar6 + 0xc) < 20000) goto LAB_ram_48150376;
      }
      else {
        iVar5 = thunk_FUN_ram_4ff3c5d4();
        uVar6 = param_1[0xd];
        if (iVar5 - *(int *)(uVar6 + 0xc) < (int)uVar7) {
LAB_ram_48150376:
          if (*(int *)(uVar3 + 0x3c) == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x476,
                             "lwip_netconn_do_close_internal","Closing a listen pcb may not fail!");
          }
          if ((bVar1 & 2) != 0) {
            FUN_ram_4813c844(uVar3,FUN_ram_4815064a);
          }
          FUN_ram_4813c8c8(uVar3,&DAT_ram_481506dc,1);
          FUN_ram_4813c87e(uVar3,&DAT_ram_4814fbec);
          FUN_ram_4813c804(uVar3,param_1);
          return;
        }
      }
      if (!bVar2) {
        *(undefined1 *)(uVar6 + 4) = 0xff;
        uVar4 = *(undefined4 *)(uVar6 + 0x24);
        param_1[0xd] = 0;
        param_1[1] = 0;
        goto LAB_ram_4815044e;
      }
      FUN_ram_4813d148(uVar3);
      uVar3 = param_1[0xd];
      *(undefined1 *)(uVar3 + 4) = 0;
      uVar4 = *(undefined4 *)(uVar3 + 0x24);
    }
    param_1[0xd] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((code *)param_1[0xe] != (code *)0x0) {
      (*(code *)param_1[0xe])(param_1,4,0);
      goto LAB_ram_4815041c;
    }
    if ((bVar1 & 1) != 0) goto LAB_ram_4815044e;
  }
  else {
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) == 0) {
        if (*(int *)(uVar3 + 0x3c) == 1) {
LAB_ram_481504fa:
          FUN_ram_4813c8b8(uVar3,0);
        }
      }
      else {
        if ((*(ushort *)(uVar3 + 0x46) & 0x10) != 0) {
LAB_ram_4815031e:
          FUN_ram_4813c804(uVar3,0);
          if (*(int *)(uVar3 + 0x3c) != 1) {
            if ((bVar1 & 1) != 0) {
              FUN_ram_4813c80a(uVar3,0);
              FUN_ram_4813c8b8(uVar3,0);
            }
            goto LAB_ram_48150336;
          }
          goto LAB_ram_481503e6;
        }
        if (*(int *)(uVar3 + 0x3c) == 1) goto LAB_ram_481504fa;
        FUN_ram_4813c844(uVar3,0);
      }
    }
    else {
      iVar5 = *(int *)(uVar3 + 0x3c);
      if ((iVar5 - 5U < 2) || (iVar5 == 8)) goto LAB_ram_481503d6;
      if ((bVar1 & 2) == 0) {
        if (iVar5 != 1) {
          FUN_ram_4813c80a(uVar3,0);
        }
        FUN_ram_4813c8b8(uVar3,0);
      }
      else {
        if ((*(ushort *)(uVar3 + 0x46) & 0x10) != 0) goto LAB_ram_4815031e;
        if (iVar5 == 1) goto LAB_ram_481504fa;
        FUN_ram_4813c80a(uVar3,0);
        FUN_ram_4813c8b8(uVar3,0);
        FUN_ram_4813c844(uVar3,0);
      }
    }
    iVar5 = FUN_ram_4813d740(uVar3,bVar1 & 1,bVar1 & 2);
    bVar2 = false;
    if (iVar5 != 0) goto LAB_ram_48150358;
    uVar3 = param_1[0xd];
    *(undefined1 *)(uVar3 + 4) = 0;
    uVar4 = *(undefined4 *)(uVar3 + 0x24);
    param_1[0xd] = 0;
    param_1[1] = 0;
LAB_ram_4815041c:
    if ((bVar1 & 1) != 0) {
      if ((code *)param_1[0xe] == (code *)0x0) goto LAB_ram_4815044e;
      (*(code *)param_1[0xe])(param_1,0,0);
    }
  }
  if (((bVar1 & 2) != 0) && ((code *)param_1[0xe] != (code *)0x0)) {
    (*(code *)param_1[0xe])(param_1,2,0);
  }
LAB_ram_4815044e:
  FUN_ram_4814e3a4(uVar4);
  return;
}


