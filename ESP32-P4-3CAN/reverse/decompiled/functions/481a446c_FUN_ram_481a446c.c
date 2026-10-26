/* Firmware entry: 0x481a446c */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_481a446c(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *******pppppppuVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  undefined4 *puVar16;
  uint local_60;
  char *pcStack_5c;
  int iStack_58;
  undefined4 *******pppppppuStack_54;
  uint uStack_50;
  char *pcStack_4c;
  int iStack_48;
  undefined4 *******apppppppuStack_44 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_event.c",0x277,"esp_event_loop_run","event_loop");
  }
  iVar8 = FUN_ram_4ff3c5d4();
  iVar15 = 0;
  iVar9 = FUN_ram_4ff3b4aa(*(undefined4 *)(param_1 + 4),&local_60,param_2);
  uVar2 = param_2;
  do {
    if (iVar9 != 1) {
      return 0;
    }
    FUN_ram_4ff3b744(*(undefined4 *)(param_1 + 0x10),0xffffffff);
    pppppppuVar12 = pppppppuStack_54;
    if (pcStack_5c == "cleanup") {
      if (pppppppuStack_54 == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("esp_event.c",0x28b,"esp_event_loop_run","post.data.ptr != NULL");
      }
      FUN_ram_481a3c54(pppppppuStack_54);
      if (*(char *)(pppppppuVar12 + 4) != '\0') {
        thunk_FUN_ram_4ff209c6(pppppppuVar12[3]);
      }
    }
    uVar10 = FUN_ram_4ff3d9a8();
    *(undefined4 *)(param_1 + 0xc) = uVar10;
    piVar6 = *(int **)(param_1 + 0x14);
    while (piVar6 != (int *)0x0) {
      piVar4 = (int *)*piVar6;
      piVar7 = (int *)piVar6[2];
      while (piVar5 = piVar4, piVar4 != (int *)0x0) {
        while (piVar4 = (int *)piVar5[1], (char)piVar5[2] == '\0') {
          uStack_50 = local_60;
          uVar13 = uStack_50;
          pcStack_4c = pcStack_5c;
          iStack_48 = iStack_58;
          apppppppuStack_44[0] = pppppppuStack_54;
          pppppppuVar12 = (undefined4 *******)0x0;
          if ((local_60 >> 8 & 0xff) != 0) {
            uStack_50._0_1_ = (char)local_60;
            pppppppuVar12 = apppppppuStack_44;
            if ((char)uStack_50 != '\0') {
              pppppppuVar12 = pppppppuStack_54;
            }
          }
          pcVar14 = *(code **)*piVar5;
          uStack_50 = uVar13;
          (*pcVar14)(((undefined4 *)*piVar5)[1],pcStack_5c,iStack_58,pppppppuVar12,local_60 >> 8,
                     pcVar14);
          piVar5 = piVar4;
          if (piVar4 == (int *)0x0) goto LAB_ram_481a44f8;
        }
      }
LAB_ram_481a44f8:
      puVar16 = (undefined4 *)piVar6[1];
joined_r0x481a44fc:
      puVar3 = puVar16;
      piVar6 = piVar7;
      if (puVar3 != (undefined4 *)0x0) {
        puVar16 = (undefined4 *)puVar3[3];
        if ((char *)*puVar3 == pcStack_5c) {
          piVar6 = (int *)puVar3[1];
          while (piVar4 = piVar6, piVar6 != (int *)0x0) {
            while (piVar6 = (int *)piVar4[1], (char)piVar4[2] == '\0') {
              uStack_50 = local_60;
              uVar13 = uStack_50;
              pcStack_4c = pcStack_5c;
              iStack_48 = iStack_58;
              apppppppuStack_44[0] = pppppppuStack_54;
              pppppppuVar12 = (undefined4 *******)0x0;
              if ((local_60 >> 8 & 0xff) != 0) {
                uStack_50._0_1_ = (char)local_60;
                pppppppuVar12 = apppppppuStack_44;
                if ((char)uStack_50 != '\0') {
                  pppppppuVar12 = pppppppuStack_54;
                }
              }
              uStack_50 = uVar13;
              (**(code **)*piVar4)(((undefined4 *)*piVar4)[1],pcStack_5c,iStack_58,pppppppuVar12);
              piVar4 = piVar6;
              if (piVar6 == (int *)0x0) goto LAB_ram_481a45e0;
            }
          }
LAB_ram_481a45e0:
          piVar6 = (int *)puVar3[2];
          do {
            piVar4 = piVar6;
            if (piVar4 == (int *)0x0) goto joined_r0x481a44fc;
            piVar6 = (int *)piVar4[2];
          } while (*piVar4 != iStack_58);
          piVar6 = (int *)piVar4[1];
          if (piVar6 != (int *)0x0) {
            cVar1 = (char)piVar6[2];
            piVar4 = (int *)piVar6[1];
            while( true ) {
              if (cVar1 == '\0') {
                pppppppuVar12 = (undefined4 *******)0x0;
                if ((local_60 >> 8 & 0xff) != 0) {
                  uStack_50._0_1_ = (char)local_60;
                  pppppppuVar12 = apppppppuStack_44;
                  if ((char)uStack_50 != '\0') {
                    pppppppuVar12 = pppppppuStack_54;
                  }
                }
                pcVar14 = *(code **)*piVar6;
                uStack_50 = local_60;
                pcStack_4c = pcStack_5c;
                iStack_48 = iStack_58;
                apppppppuStack_44[0] = pppppppuStack_54;
                (*pcVar14)(((undefined4 *)*piVar6)[1],pcStack_5c,iStack_58,pppppppuVar12,
                           local_60 >> 8,pcVar14);
              }
              if (piVar4 == (int *)0x0) break;
              cVar1 = (char)piVar4[2];
              piVar6 = piVar4;
              piVar4 = (int *)piVar4[1];
            }
          }
        }
        goto joined_r0x481a44fc;
      }
    }
    if ((local_60 & 0xff) != 0) {
      thunk_FUN_ram_4ff209c6(pppppppuStack_54);
    }
    local_60 = 0;
    pcStack_5c = (char *)0x0;
    iStack_58 = 0;
    pppppppuStack_54 = (undefined4 *******)0x0;
    iVar11 = iVar8;
    uVar13 = uVar2;
    if (param_2 != 0xffffffff) {
      iVar11 = FUN_ram_4ff3c5d4();
      uVar13 = uVar2 - (iVar11 - iVar8);
      iVar15 = iVar15 - (uint)(uVar2 < uVar13);
      if ((iVar15 < 1) && ((iVar15 != 0 || (uVar13 == 0)))) {
        FUN_ram_4ff3b1a4(*(undefined4 *)(param_1 + 0x10));
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_ram_4ff3b1a4(*(undefined4 *)(param_1 + 0x10));
    iVar9 = FUN_ram_4ff3b4aa(*(undefined4 *)(param_1 + 4),&local_60,uVar13);
    iVar8 = iVar11;
    uVar2 = uVar13;
  } while( true );
}


