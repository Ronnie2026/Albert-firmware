/* Firmware entry: 0x4804723a */

void FUN_ram_4804723a(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
                     undefined4 param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char cStack_35;
  int aiStack_34 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = 0;
  }
  iVar1 = 2;
  if (param_2 == 2) {
    iVar1 = 1;
  }
  else if ((param_2 != 4) && (iVar1 = 0, param_2 != 1)) {
    return;
  }
  if (param_3 < 0x18) {
    if (param_3 < 0x10) {
      if (param_4 == 0 && param_5 == 0) {
        return;
      }
      iVar1 = iVar1 * 0x1228 + param_3 * 0xe8;
    }
    else {
      iVar1 = (param_3 - 0x10) * 0x120;
      iVar3 = param_1 + iVar1;
      if (*(char *)(iVar3 + 0x3696) == '\0') {
        return;
      }
      if (*(byte *)(iVar3 + 0x3678) != param_2) {
        return;
      }
      if (param_4 == 0 && param_5 == 0) {
        return;
      }
      iVar1 = iVar1 + 14000;
    }
    iVar1 = iVar1 + param_1;
    if (((*(int *)(iVar1 + 0xd8) == param_4) && (*(int *)(iVar1 + 0xdc) == param_5)) &&
       ((*(uint *)(iVar1 + 0xe4) & 0xff00ff) == 0x100ff)) {
      iVar3 = 0;
      if (param_2 != 1) {
        iVar3 = (param_2 != 2) + 1;
      }
      iVar5 = *(int *)(iVar1 + 0x44);
      if (iVar5 == *(int *)(iVar3 * 0x1228 + param_1 + 0x1218)) {
        cVar4 = *(char *)(iVar1 + 0x50);
        iVar2 = *(int *)(iVar1 + 0x3c);
        if (((cVar4 == '\0') && (iVar2 == 0)) || (param_6 - iVar2 < 1)) {
          if (*(code **)(param_1 + 0x3f78) != (code *)0x0) {
            iVar5 = (**(code **)(param_1 + 0x3f78))(*(undefined4 *)(param_1 + 0x3f7c),iVar1,param_6)
            ;
            iVar1 = 1;
            if (param_2 != 2) {
              iVar1 = (uint)(param_2 == 4) << 1;
            }
            if (param_3 < 0x10) {
              iVar1 = iVar1 * 0x1228 + param_3 * 0xe8;
            }
            else {
              iVar1 = (param_3 - 0x10) * 0x120;
              iVar2 = param_1 + iVar1;
              if (*(char *)(iVar2 + 0x3696) == '\0') {
                return;
              }
              if (*(byte *)(iVar2 + 0x3678) != param_2) {
                return;
              }
              iVar1 = iVar1 + 14000;
            }
            iVar1 = param_1 + iVar1;
            if (*(int *)(iVar1 + 0xd8) != param_4) {
              return;
            }
            if (*(int *)(iVar1 + 0xdc) != param_5) {
              return;
            }
            if (*(char *)(iVar1 + 0xe6) != '\x01') {
              return;
            }
            if (iVar5 != 0) {
              if (*(byte *)(iVar1 + 0xc) < 0x56) {
                iVar2 = (iVar3 * 0x48a + (uint)*(byte *)(iVar1 + 0xc)) * 4 + param_1;
                iVar1 = *(int *)(iVar2 + 0x1098);
                if (iVar1 != -1) {
                  *(int *)(iVar2 + 0x1098) = iVar1 + 1;
                }
              }
              iVar3 = iVar3 * 0x1228 + param_1;
              iVar1 = *(int *)(iVar3 + 0x1094);
              if (iVar1 != -1) {
                *(int *)(iVar3 + 0x1094) = iVar1 + 1;
              }
              iVar1 = 0;
              cVar4 = '\b';
              goto LAB_ram_4804731a;
            }
            iVar5 = *(int *)(iVar1 + 0x44);
            iVar2 = *(int *)(iVar1 + 0x3c);
            cVar4 = *(char *)(iVar1 + 0x50);
          }
          uStack_68 = *(undefined4 *)(iVar1 + 0x18);
          uStack_64 = *(undefined4 *)(iVar1 + 0x1c);
          uStack_60 = *(undefined4 *)(iVar1 + 0x20);
          uStack_5c = *(undefined4 *)(iVar1 + 0x24);
          uStack_58 = *(undefined4 *)(iVar1 + 0x28);
          uStack_54 = *(undefined4 *)(iVar1 + 0x2c);
          uStack_50 = *(undefined4 *)(iVar1 + 0x30);
          uStack_70 = *(undefined4 *)(iVar1 + 0x10);
          uStack_6c = *(undefined4 *)(iVar1 + 0x14);
          aiStack_34[0] = 0;
          cStack_35 = '\b';
          iVar1 = FUN_ram_48046098(param_7,&uStack_70,*(undefined1 *)(iVar1 + 0x48),
                                   *(undefined1 *)(iVar1 + 0x37),*(undefined1 *)(iVar1 + 0x34),
                                   *(undefined1 *)(iVar1 + 0x35),iVar5,aiStack_34,&cStack_35,iVar2,
                                   cVar4,*(undefined1 *)(iVar1 + 0x36),0);
          if ((iVar1 == 0) || (aiStack_34[0] == 0)) {
            if ((byte)(cStack_35 - 3U) < 3) {
              return;
            }
            if (cStack_35 == '\a') {
              return;
            }
            iVar3 = iVar3 * 0x1228 + param_1;
            iVar1 = *(int *)(iVar3 + 0x1094);
            if (iVar1 != -1) {
              *(int *)(iVar3 + 0x1094) = iVar1 + 1;
            }
            if (cStack_35 == '\0') {
              iVar5 = 6;
              cVar4 = '\b';
            }
            else {
              iVar5 = 3;
              cVar4 = cStack_35;
              if (cStack_35 != '\t') {
                iVar5 = (cStack_35 != '\n') + 5;
              }
            }
            iVar1 = 0;
          }
          else {
            if (param_8 != (undefined1 *)0x0) {
              *param_8 = 1;
            }
            iVar3 = iVar3 * 0x1228 + param_1;
            iVar1 = *(int *)(iVar3 + 0x1090);
            if (iVar1 != -1) {
              *(int *)(iVar3 + 0x1090) = iVar1 + 1;
            }
            cVar4 = '\0';
            iVar5 = 7;
            iVar1 = aiStack_34[0];
          }
        }
        else {
          iVar3 = iVar3 * 0x1228 + param_1;
          iVar1 = *(int *)(iVar3 + 0x108c);
          if (iVar1 != -1) {
            *(int *)(iVar3 + 0x108c) = iVar1 + 1;
          }
          iVar1 = 0;
          cVar4 = '\t';
          iVar5 = 3;
        }
      }
      else {
        cVar4 = '\n';
        iVar5 = 5;
        iVar1 = 0;
      }
LAB_ram_4804731a:
      FUN_ram_4804691a(param_1,param_2,param_3,iVar5,cVar4,iVar1);
      return;
    }
  }
  return;
}


