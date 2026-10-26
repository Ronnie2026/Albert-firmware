/* Firmware entry: 0x4808c96e */

void FUN_ram_4808c96e(int *param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_3 != (byte *)0x0) && (iVar2 = FUN_ram_4808c696(), iVar2 != 0)) &&
     ((char)param_1[10] != '\0')) {
    uVar3 = param_1[2];
    if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
      *(undefined1 *)(*param_1 + uVar3) = 0x22;
      iVar2 = param_1[2];
      param_1[2] = iVar2 + 1;
      *(undefined1 *)(iVar2 + 1 + *param_1) = 0;
      uVar3 = (uint)*(byte *)(param_1 + 10);
      if (param_4 != 0) {
        pbVar5 = param_3 + param_4;
        do {
          if (uVar3 == 0) goto LAB_ram_4808c98a;
LAB_ram_4808c9e8:
          bVar1 = *param_3;
          if ((bVar1 == 0x22) || (bVar1 == 0x5c)) {
            uVar3 = param_1[2];
            if (((uint)param_1[1] < uVar3) || (param_1[1] - uVar3 < 3)) goto LAB_ram_4808c98a;
            iVar2 = *param_1;
            *(undefined1 *)(iVar2 + uVar3) = 0x5c;
            ((undefined1 *)(iVar2 + uVar3))[1] = bVar1;
            iVar2 = *param_1;
            iVar4 = param_1[2] + 2;
LAB_ram_4808ca50:
            param_1[2] = iVar4;
            *(undefined1 *)(iVar4 + iVar2) = 0;
            *(undefined1 *)(param_1 + 10) = 1;
joined_r0x4808cb24:
            param_3 = param_3 + 1;
            if (param_3 == pbVar5) goto LAB_ram_4808ca14;
            goto LAB_ram_4808c9e8;
          }
          if (0x1f < bVar1) {
            uVar3 = param_1[2];
            if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
              *(byte *)(*param_1 + uVar3) = bVar1;
              iVar2 = *param_1;
              iVar4 = param_1[2] + 1;
              goto LAB_ram_4808ca50;
            }
            goto LAB_ram_4808c98a;
          }
          uVar3 = (uint)*(byte *)((int)param_1 + 0x29);
          if (uVar3 != 0) {
            if (bVar1 != 10) goto LAB_ram_4808ca04;
            uVar3 = param_1[2];
            if (((uint)param_1[1] < uVar3) || (param_1[1] - uVar3 < 3)) goto LAB_ram_4808c98a;
            iVar2 = *param_1;
            *(undefined1 *)(iVar2 + uVar3) = 0x5c;
            ((undefined1 *)(iVar2 + uVar3))[1] = 0x6e;
            iVar2 = param_1[2];
            param_1[2] = iVar2 + 2;
            *(undefined1 *)(iVar2 + 2 + *param_1) = 0;
            *(undefined1 *)(param_1 + 10) = 1;
            goto joined_r0x4808cb24;
          }
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_32 = 0;
          FUN_ram_4819ad74(&uStack_38,7,"\\u%04x");
          uVar3 = FUN_ram_4808c90a(param_1,&uStack_38,6);
          *(char *)(param_1 + 10) = (char)uVar3;
LAB_ram_4808ca04:
          param_3 = param_3 + 1;
        } while (pbVar5 != param_3);
      }
      if (uVar3 != 0) {
LAB_ram_4808ca14:
        uVar3 = param_1[2];
        if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
          *(undefined1 *)(*param_1 + uVar3) = 0x22;
          iVar2 = param_1[2];
          param_1[2] = iVar2 + 1;
          *(undefined1 *)(iVar2 + 1 + *param_1) = 0;
          return;
        }
      }
    }
  }
LAB_ram_4808c98a:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


