/* Firmware entry: 0x481710ea */

uint FUN_ram_481710ea(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xffff8f00;
  }
  if (*param_1 == 0) {
    uVar1 = 0xffff8f00;
  }
  else {
    uVar1 = FUN_ram_4816f8a8();
    if (((uVar1 == 0xffff9500) || (uVar1 == 0)) &&
       ((param_1[1] == 0x1b ||
        ((uVar1 = FUN_ram_4816a7ec(param_1), uVar1 == 0xffff9500 || (uVar1 == 0)))))) {
      iVar2 = param_1[0x1e];
      while (iVar2 == 0) {
        if ((((code *)param_1[0x17] != (code *)0x0) &&
            (iVar2 = (*(code *)param_1[0x17])(param_1[0x15]), iVar2 == -1)) &&
           ((code *)param_1[0x16] != (code *)0x0)) {
          (*(code *)param_1[0x16])(param_1[0x15],*(uint *)(*param_1 + 0x6c) >> 2);
        }
        uVar1 = FUN_ram_48170c76(param_1,1);
        if (uVar1 != 0) {
LAB_ram_4817130e:
          if (uVar1 == 0xffff8d80) {
            return 0;
          }
          return uVar1;
        }
        iVar2 = param_1[0x1f];
        if (param_1[0x20] == 0) {
          if (iVar2 == 0x17) {
            uVar1 = FUN_ram_48170c76(param_1,1);
            if (uVar1 != 0) goto LAB_ram_4817130e;
            iVar2 = param_1[0x1f];
            goto LAB_ram_48171186;
          }
          if (iVar2 != 0x16) {
            if ((param_1[2] != 3) || (iVar3 = *(int *)(*param_1 + 0x70), iVar3 < 0)) {
              if (iVar2 != 0x15) {
                return 0xffff8900;
              }
              return 0xffff9700;
            }
            goto LAB_ram_4817129e;
          }
LAB_ram_481711f0:
          if (0x303 < (uint)param_1[4]) {
            return 0xffff9400;
          }
          iVar2 = *param_1;
          if (*(char *)(iVar2 + 8) == '\0') {
            if ((*(char *)param_1[0x1d] != '\0') || (param_1[0x22] != 4)) {
              return 0xffff8900;
            }
LAB_ram_48171210:
            if ((*(char *)(iVar2 + 0xf) == '\0') ||
               ((param_1[0x34] == 0 && (*(char *)(iVar2 + 0xb) == '\0')))) goto LAB_ram_481712ba;
            uVar1 = FUN_ram_4816aaba(param_1);
joined_r0x4817127a:
            if (uVar1 != 0xffff9500) goto LAB_ram_4817122c;
          }
          else {
            if (*(char *)(iVar2 + 8) != '\x01') goto LAB_ram_48171210;
            if (*(char *)param_1[0x1d] != '\x01') {
              return 0xffff8900;
            }
            if ((*(char *)(iVar2 + 0xf) != '\0') &&
               ((param_1[0x34] != 0 || (*(char *)(iVar2 + 0xb) != '\0')))) {
              param_1[0x24] = 1;
              uVar1 = FUN_ram_4816aaba(param_1);
              goto joined_r0x4817127a;
            }
LAB_ram_481712ba:
            if (param_1[0x2f] == 0) {
              param_1[0x2e] = 2;
              param_1[0x2d] = 0x15;
              *(undefined1 *)param_1[0x2c] = 1;
              *(undefined1 *)(param_1[0x2c] + 1) = 100;
              uVar1 = FUN_ram_48170748(param_1);
            }
            else {
              uVar1 = FUN_ram_4817069a(param_1);
            }
LAB_ram_4817122c:
            if (uVar1 != 0) {
              return uVar1;
            }
          }
          goto LAB_ram_481711b0;
        }
LAB_ram_48171186:
        if (iVar2 == 0x16) goto LAB_ram_481711f0;
        if ((param_1[2] == 3) && (iVar3 = *(int *)(*param_1 + 0x70), -1 < iVar3)) {
LAB_ram_4817129e:
          iVar4 = param_1[3];
          param_1[3] = iVar4 + 1;
          if (iVar3 < iVar4 + 1) {
            return 0xffff8900;
          }
        }
        if (iVar2 == 0x15) {
          return 0xffff9700;
        }
        if (iVar2 != 0x17) {
          return 0xffff8900;
        }
        iVar2 = param_1[0x1d];
        param_1[0x1e] = iVar2;
        if ((0x1a < param_1[1]) && ((code *)param_1[0x16] != (code *)0x0)) {
          (*(code *)param_1[0x16])(param_1[0x15],0,0);
LAB_ram_481711b0:
          iVar2 = param_1[0x1e];
        }
      }
      uVar1 = param_3;
      if ((uint)param_1[0x20] <= param_3) {
        uVar1 = param_1[0x20];
      }
      if (param_3 != 0) {
        FUN_ram_4ff45158(param_2,iVar2,uVar1);
        param_1[0x20] = param_1[0x20] - uVar1;
      }
      FUN_ram_48178af2(param_1[0x1e],uVar1);
      if (param_1[0x20] == 0) {
        param_1[0x24] = 0;
        iVar2 = 0;
      }
      else {
        iVar2 = param_1[0x1e] + uVar1;
      }
      param_1[0x1e] = iVar2;
    }
  }
  return uVar1;
}


