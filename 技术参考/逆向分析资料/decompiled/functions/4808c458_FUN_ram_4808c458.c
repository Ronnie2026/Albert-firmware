/* Firmware entry: 0x4808c458 */

void FUN_ram_4808c458(int *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((char)param_1[10] != '\0') && (param_1[3] != 0)) &&
     (iVar3 = param_1[3] + -1 + (int)param_1, *(char *)(iVar3 + 0x1c) == '\0')) {
    if (*(char *)(iVar3 + 0x10) == '\0') {
      uVar2 = param_1[2];
      if (((uint)param_1[1] < uVar2) || (param_1[1] - uVar2 < 2)) goto LAB_ram_4808c49e;
      *(undefined1 *)(*param_1 + uVar2) = 0x2c;
      iVar3 = param_1[2];
      param_1[2] = iVar3 + 1;
      *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
      iVar3 = param_1[3] + -1 + (int)param_1;
    }
    *(undefined1 *)(iVar3 + 0x10) = 0;
    if ((param_2 != (byte *)0x0) && ((char)param_1[10] != '\0')) {
      uVar2 = param_1[2];
      if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
        *(undefined1 *)(*param_1 + uVar2) = 0x22;
        iVar3 = param_1[2];
        param_1[2] = iVar3 + 1;
        *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
        bVar1 = *param_2;
        if (bVar1 == 0) {
          if ((char)param_1[10] == '\0') goto LAB_ram_4808c49e;
        }
        else {
          if ((char)param_1[10] == '\0') goto LAB_ram_4808c49e;
          do {
            while ((bVar1 == 0x22 || (bVar1 == 0x5c))) {
              uVar2 = param_1[2];
              if (((uint)param_1[1] < uVar2) || (param_1[1] - uVar2 < 3)) goto LAB_ram_4808c49e;
              iVar3 = *param_1;
              ((undefined1 *)(iVar3 + uVar2))[1] = bVar1;
              *(undefined1 *)(iVar3 + uVar2) = 0x5c;
              iVar3 = *param_1;
              iVar4 = param_1[2] + 2;
LAB_ram_4808c53c:
              param_2 = param_2 + 1;
              param_1[2] = iVar4;
              *(undefined1 *)(iVar4 + iVar3) = 0;
              *(undefined1 *)(param_1 + 10) = 1;
              bVar1 = *param_2;
              if (bVar1 == 0) goto LAB_ram_4808c54e;
            }
            if (0x1f < bVar1) {
              uVar2 = param_1[2];
              if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
                *(byte *)(*param_1 + uVar2) = bVar1;
                iVar3 = *param_1;
                iVar4 = param_1[2] + 1;
                goto LAB_ram_4808c53c;
              }
              goto LAB_ram_4808c49e;
            }
            uStack_28 = 0;
            uStack_24 = 0;
            uStack_22 = 0;
            FUN_ram_4819ad74(&uStack_28,7,"\\u%04x");
            if ((char)param_1[10] == '\0') goto LAB_ram_4808c49e;
            uVar2 = param_1[2];
            if (((uint)param_1[1] < uVar2) || (param_1[1] - uVar2 < 7)) goto LAB_ram_4808c49e;
            puVar5 = (undefined1 *)(*param_1 + uVar2);
            *puVar5 = (undefined1)uStack_28;
            puVar5[5] = uStack_24._1_1_;
            puVar5[1] = uStack_28._1_1_;
            puVar5[2] = uStack_28._2_1_;
            puVar5[3] = uStack_28._3_1_;
            puVar5[4] = (undefined1)uStack_24;
            iVar3 = param_1[2];
            param_1[2] = iVar3 + 6;
            *(undefined1 *)(iVar3 + 6 + *param_1) = 0;
            param_2 = param_2 + 1;
            *(undefined1 *)(param_1 + 10) = 1;
            bVar1 = *param_2;
          } while (bVar1 != 0);
        }
LAB_ram_4808c54e:
        uVar2 = param_1[2];
        if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
          *(undefined1 *)(*param_1 + uVar2) = 0x22;
          iVar3 = param_1[2];
          param_1[2] = iVar3 + 1;
          *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
          return;
        }
      }
    }
  }
LAB_ram_4808c49e:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


