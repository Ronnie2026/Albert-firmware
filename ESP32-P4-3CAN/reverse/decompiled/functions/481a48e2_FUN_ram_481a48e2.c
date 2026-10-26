/* Firmware entry: 0x481a48e2 */

undefined4 FUN_ram_481a48e2(int param_1,undefined *param_2,int param_3,int *param_4,char param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iStack_34;
  undefined *puStack_30;
  int iStack_2c;
  int *piStack_28;
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_event.c",0x35e,"esp_event_handler_unregister_with_internal","event_loop");
  }
  if (param_4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_event.c",0x35f,"esp_event_handler_unregister_with_internal","handler_ctx")
    ;
  }
  if (param_2 == (undefined *)0x0) {
    if (param_3 != -1) {
      uVar10 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"event",
                       "E (%lu) %s: unregistering to any event base with specific id unsupported\n",
                       uVar10,"event");
      return 0x102;
    }
    param_2 = &DAT_ram_481d743c;
  }
  iStack_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  piStack_28 = param_4;
  cStack_24 = param_5;
  iVar3 = FUN_ram_4ff3b5f0(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar3 == 1) {
    uVar10 = FUN_ram_481a3c54(&iStack_34);
    FUN_ram_4ff3afa2(*(undefined4 *)(param_1 + 0x10),0,0,0);
    return uVar10;
  }
  FUN_ram_4ff3b744(*(undefined4 *)(param_1 + 0x10),0xffffffff);
  piVar1 = piStack_28;
  iVar3 = iStack_34;
  puVar2 = *(undefined4 **)(iStack_34 + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar11 = (undefined4 *)0x0;
LAB_ram_481a493c:
    puVar7 = (undefined4 *)*puVar2;
    if (puVar7 == (undefined4 *)0x0) goto LAB_ram_481a49ee;
    while( true ) {
      piVar5 = (int *)*puVar7;
      if (cStack_24 == '\0') {
        while( true ) {
          if (piStack_28 == piVar5) {
            uVar10 = 0;
            if (*(char *)(puVar7 + 2) != '\0') goto LAB_ram_481a49a2;
            *(undefined1 *)(puVar7 + 2) = 1;
            goto LAB_ram_481a4988;
          }
          puVar7 = (undefined4 *)puVar7[1];
          if (puVar7 == (undefined4 *)0x0) break;
          piVar5 = (int *)*puVar7;
        }
      }
      else {
        while( true ) {
          if (*piVar5 == *piStack_28) {
            uVar10 = 0;
            if (*(char *)(puVar7 + 2) != '\0') goto LAB_ram_481a49a2;
            *(undefined1 *)(puVar7 + 2) = 1;
            goto LAB_ram_481a4a42;
          }
          puVar7 = (undefined4 *)puVar7[1];
          if (puVar7 == (undefined4 *)0x0) break;
          piVar5 = (int *)*puVar7;
        }
      }
LAB_ram_481a49ee:
      if (puVar11 != (undefined4 *)0x0) break;
      do {
        puVar6 = (undefined4 *)puVar2[1];
        puVar7 = puVar11;
        if (puVar6 != (undefined4 *)0x0) goto LAB_ram_481a49fe;
        puVar2 = (undefined4 *)puVar2[2];
        if (puVar2 == (undefined4 *)0x0) {
          uVar10 = 0x105;
          goto LAB_ram_481a49a2;
        }
        puVar7 = (undefined4 *)*puVar2;
      } while (puVar7 == (undefined4 *)0x0);
      puVar11 = (undefined4 *)0x0;
    }
    goto LAB_ram_481a4a30;
  }
  uVar10 = 0x105;
LAB_ram_481a49a2:
  FUN_ram_4ff3b1a4(*(undefined4 *)(param_1 + 0x10));
  return uVar10;
LAB_ram_481a49fe:
  do {
    if ((undefined *)*puVar6 == puStack_30) {
      puVar11 = (undefined4 *)puVar6[1];
      if (puVar11 != (undefined4 *)0x0) {
        piVar5 = (int *)*puVar11;
        if (cStack_24 == '\0') {
          while( true ) {
            if (piStack_28 == piVar5) goto LAB_ram_481a4a20;
            puVar11 = (undefined4 *)puVar11[1];
            if (puVar11 == (undefined4 *)0x0) break;
            piVar5 = (int *)*puVar11;
          }
        }
        else {
          while( true ) {
            if (*piVar5 == *piStack_28) goto LAB_ram_481a4a20;
            puVar11 = (undefined4 *)puVar11[1];
            if (puVar11 == (undefined4 *)0x0) break;
            piVar5 = (int *)*puVar11;
          }
        }
      }
      puVar11 = puVar7;
      if (puVar7 != (undefined4 *)0x0) break;
      for (piVar5 = (int *)puVar6[2]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
        puVar11 = puVar7;
        if ((*piVar5 == iStack_2c) &&
           (puVar9 = (undefined4 *)piVar5[1], puVar9 != (undefined4 *)0x0)) {
          piVar4 = (int *)*puVar9;
          if (cStack_24 == '\0') {
            while ((puVar11 = puVar9, piStack_28 != piVar4 &&
                   (puVar9 = (undefined4 *)puVar9[1], puVar11 = puVar7, puVar9 != (undefined4 *)0x0)
                   )) {
              piVar4 = (int *)*puVar9;
            }
          }
          else {
            while ((puVar11 = puVar9, *piVar4 != *piStack_28 &&
                   (puVar9 = (undefined4 *)puVar9[1], puVar11 = puVar7, puVar9 != (undefined4 *)0x0)
                   )) {
              piVar4 = (int *)*puVar9;
            }
          }
        }
        puVar7 = puVar11;
      }
    }
    puVar6 = (undefined4 *)puVar6[3];
    puVar11 = puVar7;
  } while (puVar6 != (undefined4 *)0x0);
LAB_ram_481a4a20:
  puVar2 = (undefined4 *)puVar2[2];
  if (puVar2 == (undefined4 *)0x0) goto code_r0x481a4a28;
  goto LAB_ram_481a493c;
code_r0x481a4a28:
  uVar10 = 0x105;
  if (puVar11 != (undefined4 *)0x0) {
LAB_ram_481a4a30:
    if (*(char *)(puVar11 + 2) == '\0') {
      *(undefined1 *)(puVar11 + 2) = 1;
      if (cStack_24 != '\0') {
LAB_ram_481a4a42:
        piVar5 = (int *)FUN_ram_4ff45080(1,8);
        if (piVar5 == (int *)0x0) {
          uVar10 = 0x101;
          goto LAB_ram_481a49a2;
        }
        iVar8 = *piVar1;
        piVar5[1] = piVar1[1];
        *piVar5 = iVar8;
        piStack_28 = piVar5;
      }
LAB_ram_481a4988:
      uVar10 = FUN_ram_481a4146(iVar3,"cleanup",0,&iStack_34,0x14,0xffffffff);
    }
    else {
      uVar10 = 0;
    }
  }
  goto LAB_ram_481a49a2;
}


