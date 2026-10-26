/* Firmware entry: 0x4814fee2 */

void FUN_ram_4814fee2(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x6c6,"lwip_netconn_do_writemore"
                     ,"conn != NULL");
  }
  if (*(int *)(param_1 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x6c7,"lwip_netconn_do_writemore"
                     ,"conn->state == NETCONN_WRITE");
  }
  iVar16 = *(int *)(param_1 + 0x34);
  if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x6c8,"lwip_netconn_do_writemore"
                     ,"conn->current_msg != NULL");
  }
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x6c9,"lwip_netconn_do_writemore"
                     ,"conn->pcb.tcp != NULL");
  }
  if (*(uint *)(iVar16 + 0x14) <= *(uint *)(iVar16 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x6ca,"lwip_netconn_do_writemore"
                     ,"conn->current_msg->msg.w.offset < conn->current_msg->msg.w.len");
  }
  if (*(short *)(iVar16 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x6cc,"lwip_netconn_do_writemore"
                     ,"conn->current_msg->msg.w.vector_cnt > 0");
  }
  bVar8 = *(byte *)(iVar16 + 0x1c);
  bVar1 = *(byte *)(param_1 + 0x30);
  bVar3 = bVar8 & 4;
  bVar4 = bVar8 & 4;
  bVar5 = bVar8 & 4;
  bVar6 = bVar8 & 4;
  bVar7 = bVar8 & 4;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar9 = thunk_FUN_ram_4ff3c5d4();
    iVar16 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x20) <= iVar9 - *(int *)(iVar16 + 0x20)) {
      bVar8 = -(*(int *)(iVar16 + 0x18) == 0) & 0xf9;
LAB_ram_48150076:
      *(byte *)(iVar16 + 4) = bVar8;
      uVar10 = *(undefined4 *)(iVar16 + 0x24);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_ram_4814e3a4(uVar10);
      return;
    }
    iVar9 = *(int *)(param_1 + 8);
  }
  iVar15 = *(int *)(iVar16 + 0x10);
  uVar18 = (*(int **)(iVar16 + 8))[1];
  uVar12 = (uint)*(ushort *)(iVar9 + 0xb0);
  uVar17 = uVar18 - iVar15;
  iVar11 = **(int **)(iVar16 + 8) + iVar15;
  if (uVar17 < 0x10000) goto LAB_ram_4814ffac;
LAB_ram_4814ff5c:
  bVar8 = bVar8 | 2;
  if (uVar12 != 0xffff) goto LAB_ram_48150030;
  uVar13 = uVar12;
  uVar12 = 0xffff;
  if (uVar18 < iVar15 + 0xffffU) {
LAB_ram_481500a8:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x6f6,"lwip_netconn_do_writemore"
                     ,"lwip_netconn_do_writemore: invalid length!");
  }
  do {
    bVar2 = true;
LAB_ram_4814ff6e:
    do {
      uVar17 = FUN_ram_48140b9e(iVar9,iVar11,uVar13,bVar8);
      if (uVar17 != 0) {
        if ((uVar17 + 1 & 0xff) < 2) {
          iVar9 = -1;
          if ((bVar1 & 2) == 0 && bVar6 == 0) goto LAB_ram_4814ffe2;
LAB_ram_481500f8:
          iVar16 = *(int *)(param_1 + 0x34);
          uVar12 = *(uint *)(iVar16 + 0x18);
LAB_ram_481500fc:
          if (*(uint *)(iVar16 + 0x14) <= uVar12) goto LAB_ram_4814ffe2;
          if (*(code **)(param_1 + 0x38) != (code *)0x0) {
            (**(code **)(param_1 + 0x38))(param_1,3,0);
          }
          *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 0x10;
          if (iVar9 != 0) goto LAB_ram_4815011c;
LAB_ram_48150152:
          uVar17 = FUN_ram_48141ae6(*(undefined4 *)(param_1 + 8));
          iVar16 = *(int *)(param_1 + 0x34);
          if (uVar17 != 0xfffffffc) {
            uVar17 = 0;
          }
          goto LAB_ram_4815006c;
        }
LAB_ram_4815006a:
        iVar16 = *(int *)(param_1 + 0x34);
LAB_ram_4815006c:
        bVar8 = (byte)uVar17;
        goto LAB_ram_48150076;
      }
      iVar16 = *(int *)(param_1 + 0x34);
      iVar9 = *(int *)(*(int *)(iVar16 + 8) + 4);
      iVar11 = *(int *)(iVar16 + 0x10) + uVar12;
      *(uint *)(iVar16 + 0x18) = *(int *)(iVar16 + 0x18) + uVar12;
      *(int *)(iVar16 + 0x10) = iVar11;
      if ((iVar11 == iVar9) &&
         (sVar14 = *(short *)(iVar16 + 0xc) + -1, *(short *)(iVar16 + 0xc) = sVar14, sVar14 != 0)) {
        *(int *)(iVar16 + 8) = *(int *)(iVar16 + 8) + 8;
        *(undefined4 *)(iVar16 + 0x10) = 0;
        if (bVar2) goto LAB_ram_4814ff92;
LAB_ram_4814ffde:
        iVar9 = 0;
        if ((bVar1 & 2) != 0 || bVar3 != 0) goto LAB_ram_481500f8;
LAB_ram_4814ffe2:
        if (((-1 < *(short *)(*(int *)(param_1 + 8) + 0xb0)) ||
            (0x5a < *(ushort *)(*(int *)(param_1 + 8) + 0xb2))) &&
           (*(code **)(param_1 + 0x38) != (code *)0x0)) {
          (**(code **)(param_1 + 0x38))(param_1,3,0);
        }
        if (iVar9 == 0) {
          if ((*(int *)(*(int *)(param_1 + 0x34) + 0x18) ==
               *(int *)(*(int *)(param_1 + 0x34) + 0x14)) || ((bVar1 & 2) != 0 || bVar4 != 0))
          goto LAB_ram_48150152;
          uVar17 = FUN_ram_48141ae6(*(undefined4 *)(param_1 + 8));
          if (uVar17 != 0xfffffffc) {
            return;
          }
          goto LAB_ram_4815006a;
        }
LAB_ram_4815011c:
        if (iVar9 == -1) {
          uVar17 = FUN_ram_48141ae6(*(undefined4 *)(param_1 + 8));
          if (uVar17 == 0xfffffffc) goto LAB_ram_4815006a;
          if ((bVar1 & 2) == 0 && bVar7 == 0) {
            return;
          }
          iVar16 = *(int *)(param_1 + 0x34);
          uVar17 = -(uint)(*(int *)(iVar16 + 0x18) == 0) & 0xfffffff9;
        }
        else {
          iVar16 = *(int *)(param_1 + 0x34);
          uVar17 = 0xfffffff9;
        }
        goto LAB_ram_4815006c;
      }
      if (!bVar2) goto LAB_ram_4814ffde;
LAB_ram_4814ff92:
      iVar15 = *(int *)(iVar16 + 0x10);
      iVar9 = *(int *)(param_1 + 8);
      uVar18 = (*(int **)(iVar16 + 8))[1];
      uVar12 = (uint)*(ushort *)(iVar9 + 0xb0);
      uVar17 = uVar18 - iVar15;
      iVar11 = **(int **)(iVar16 + 8) + iVar15;
      if (0xffff < uVar17) goto LAB_ram_4814ff5c;
LAB_ram_4814ffac:
      uVar13 = uVar17 & 0xffff;
      if (uVar12 < uVar13) {
LAB_ram_48150030:
        uVar13 = uVar12;
        if ((bVar1 & 2) == 0 && bVar5 == 0) {
          bVar8 = bVar8 | 2;
        }
        else if (uVar13 == 0) {
          uVar12 = *(uint *)(iVar16 + 0x18);
          iVar9 = (-(uint)(uVar12 != 0) & 7) - 7;
          goto LAB_ram_481500fc;
        }
        if (uVar18 < iVar15 + uVar13) goto LAB_ram_481500a8;
        bVar2 = false;
        uVar12 = uVar13;
        if ((uVar17 & 0xffff) != uVar13) goto LAB_ram_4814ff6e;
      }
      else {
        uVar12 = uVar17;
        if (uVar13 == 0xffff) {
          uVar12 = 0xffff;
        }
      }
      bVar2 = false;
    } while (*(ushort *)(iVar16 + 0xc) < 2);
    bVar8 = bVar8 | 2;
  } while( true );
}


