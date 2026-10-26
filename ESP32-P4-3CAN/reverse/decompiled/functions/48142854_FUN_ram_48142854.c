/* Firmware entry: 0x48142854 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48142854(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined2 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/udp.c",0xcf,"udp_input",
                     "udp_input: invalid pbuf");
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/udp.c",0xd0,"udp_input",
                     "udp_input: invalid netif");
  }
  if (*(ushort *)(param_1 + 10) < 8) goto LAB_ram_48142a42;
  puVar4 = *(undefined2 **)(param_1 + 4);
  iVar9 = 0;
  if (DAT_ram_4ff6cdf4 != '\x06') {
    iVar9 = FUN_ram_48147794(_DAT_ram_4ff6cde0,DAT_ram_4ff6cdb4);
  }
  uVar6 = FUN_ram_48137fc8(*puVar4);
  uVar7 = FUN_ram_48137fc8(puVar4[1]);
  piVar2 = DAT_ram_4ff6e208;
  if (DAT_ram_4ff6e208 != (int *)0x0) {
    piVar10 = (int *)0x0;
    piVar3 = DAT_ram_4ff6e208;
    piVar11 = (int *)0x0;
    do {
      piVar5 = piVar3;
      if ((*(ushort *)((int)piVar5 + 0x3a) == uVar7) &&
         (iVar8 = FUN_ram_48142758(piVar5,param_2,iVar9), iVar8 != 0)) {
        if ((*(byte *)(piVar5 + 0xe) & 4) != 0) goto LAB_ram_4814291c;
        if (piVar10 == (int *)0x0) {
LAB_ram_4814291a:
          piVar10 = piVar5;
        }
        else {
          if ((iVar9 != 0) && (_DAT_ram_4ff6cde0 == 0xffffffff)) {
            if ((((char)piVar10[5] == '\0') && (*piVar10 == *(int *)(param_2 + 4))) ||
               (((char)piVar5[5] != '\0' || (*piVar5 != *(int *)(param_2 + 4)))))
            goto LAB_ram_4814291c;
            goto LAB_ram_4814291a;
          }
          if ((char)piVar5[5] == '\x06') {
            if (((*piVar5 != 0) || (piVar5[1] != 0)) || (piVar5[2] != 0)) goto LAB_ram_4814291a;
            if (piVar5[3] != 0) {
              piVar10 = piVar5;
            }
          }
          else if (*piVar5 != 0) goto LAB_ram_4814291a;
        }
LAB_ram_4814291c:
        if (*(ushort *)(piVar5 + 0xf) == uVar6) {
          iVar8 = piVar5[6];
          if ((char)piVar5[0xb] == '\x06') {
            if ((((iVar8 == 0) && (piVar5[7] == 0)) && ((piVar5[8] == 0 && (piVar5[9] == 0)))) ||
               (((DAT_ram_4ff6cddc == '\x06' && (DAT_ram_4ff6cdc8 == iVar8)) &&
                ((piVar5[7] == DAT_ram_4ff6cdcc &&
                 (((piVar5[8] == DAT_ram_4ff6cdd0 && (piVar5[9] == DAT_ram_4ff6cdd4)) &&
                  ((char)piVar5[10] == DAT_ram_4ff6cdd8)))))))) goto LAB_ram_48142940;
          }
          else if ((iVar8 == 0) ||
                  ((DAT_ram_4ff6cddc == (char)piVar5[0xb] && (DAT_ram_4ff6cdc8 == iVar8)))) {
LAB_ram_48142940:
            if (piVar11 == (int *)0x0) {
              iVar8 = FUN_ram_4813ab98(param_1,8);
              piVar10 = piVar5;
            }
            else {
              piVar11[0xd] = piVar5[0xd];
              piVar5[0xd] = (int)piVar2;
              DAT_ram_4ff6e208 = piVar5;
              iVar8 = FUN_ram_4813ab98(param_1,8);
              piVar10 = piVar5;
            }
            goto joined_r0x48142b8e;
          }
        }
      }
      piVar3 = (int *)piVar5[0xd];
      piVar11 = piVar5;
    } while ((int *)piVar5[0xd] != (int *)0x0);
    if (piVar10 != (int *)0x0) {
      iVar8 = FUN_ram_4813ab98(param_1,8);
joined_r0x48142b8e:
      if (iVar8 != 0) goto LAB_ram_4814295c;
      if ((*(byte *)((int)piVar10 + 0x31) & 4) == 0) goto LAB_ram_481429b6;
      piVar2 = DAT_ram_4ff6e208;
      if (iVar9 == 0) {
        if (DAT_ram_4ff6cdf4 == '\x06') {
          if ((_DAT_ram_4ff6cde0 & 0xff) == 0xff) goto joined_r0x48142afa;
        }
        else if ((_DAT_ram_4ff6cde0 & 0xf0) == 0xe0) goto joined_r0x48142afa;
      }
      else {
joined_r0x48142afa:
        for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xd]) {
          if (((piVar2 != piVar10) && (*(ushort *)((int)piVar2 + 0x3a) == uVar7)) &&
             ((iVar8 = FUN_ram_48142758(piVar2,param_2,iVar9), iVar8 != 0 &&
              ((piVar2[0x12] != 0 && (iVar8 = FUN_ram_4813b5b8(0,0x182,param_1), iVar8 != 0)))))) {
            (*(code *)piVar2[0x12])
                      (piVar2[0x13],piVar2,iVar8,&DAT_ram_4ff6cdc8,uVar6,(code *)piVar2[0x12]);
          }
        }
      }
LAB_ram_481429b6:
      if ((code *)piVar10[0x12] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x481429e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)piVar10[0x12])(piVar10[0x13],piVar10,param_1,&DAT_ram_4ff6cdc8,uVar6);
        return;
      }
      goto LAB_ram_48142a42;
    }
  }
  if ((DAT_ram_4ff6cdc0 == 0) ||
     (uVar6 = FUN_ram_4813a644(param_2,&DAT_ram_4ff6cde0), DAT_ram_4ff6cdc0 == 0)) {
    uVar6 = (uint)(*(uint *)(param_2 + 4) == _DAT_ram_4ff6cde0);
  }
  else {
    uVar6 = (~uVar6 & 0xff) >> 7;
  }
  if (uVar6 != 0) {
    iVar8 = FUN_ram_4813ab98(param_1,8);
    if (iVar8 != 0) {
LAB_ram_4814295c:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/udp.c",0x170,"udp_input",
                       "pbuf_remove_header failed");
    }
    if (iVar9 == 0) {
      if (DAT_ram_4ff6cdf4 == '\x06') {
        bVar1 = (_DAT_ram_4ff6cde0 & 0xff) != 0xff;
      }
      else {
        bVar1 = (_DAT_ram_4ff6cde0 & 0xf0) != 0xe0;
      }
      if (bVar1) {
        FUN_ram_4813abfa(param_1,(int)((DAT_ram_4ff6cdc4 + 8) * 0x10000) >> 0x10);
        if (DAT_ram_4ff6cdc0 == 0) {
          FUN_ram_481466dc(param_1,3);
        }
        else {
          FUN_ram_48147f00(param_1,4);
        }
      }
    }
  }
LAB_ram_48142a42:
  FUN_ram_4813ac74(param_1);
  return;
}


