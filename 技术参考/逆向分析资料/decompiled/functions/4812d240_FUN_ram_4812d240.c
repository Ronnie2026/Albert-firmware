/* Firmware entry: 0x4812d240 */

int FUN_ram_4812d240(int param_1,short *param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (short *)0x0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_ota_ops","E (%lu) %s: write data is invalid\n",uVar4,"esp_ota_ops");
    iVar3 = 0x102;
  }
  else {
    piVar2 = DAT_ram_4ff6e09c;
    if (param_3 == 0) {
LAB_ram_4812d382:
      iVar3 = 0;
    }
    else {
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
        if (*piVar2 == param_1) {
          if ((char)piVar2[4] == '\0') {
LAB_ram_4812d2de:
            if ((piVar2[5] == 0) && ((char)piVar2[6] == '\0')) {
              if ((*(uint *)(piVar2[2] + 4) & 0xfffffffd) == 0) {
                if ((char)*param_2 != -0x17) {
                  uVar4 = FUN_ram_4ff44d14();
                  FUN_ram_4ff44bf0(1,"esp_ota_ops",
                                   "E (%lu) %s: OTA image has invalid magic byte (expected 0xE9, saw 0x%02x)\n"
                                   ,uVar4,"esp_ota_ops",(char)*param_2);
                  return 0x1503;
                }
              }
              else if ((*(uint *)(piVar2[2] + 4) == 3) && (*param_2 != 0x50aa)) {
                uVar4 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"esp_ota_ops",
                                 "E (%lu) %s: Partition table image has invalid magic word (expected 0x50AA, saw 0x%04x)\n"
                                 ,uVar4,"esp_ota_ops",*param_2);
                return 0x1503;
              }
            }
          }
          else {
            iVar3 = piVar2[1];
            uVar5 = piVar2[5];
            uVar7 = *(uint *)(iVar3 + 0x14);
            uVar6 = uVar5 / uVar7;
            uVar8 = ((param_3 - 1) + uVar5) / uVar7;
            if (uVar5 % uVar7 == 0) {
              iVar3 = FUN_ram_4812e61e(iVar3,uVar5,((uVar8 + 1) - uVar6) * uVar7);
joined_r0x4812d2da:
              if (iVar3 != 0) {
                return iVar3;
              }
              goto LAB_ram_4812d2de;
            }
            if (uVar6 != uVar8) {
              iVar3 = FUN_ram_4812e61e(iVar3,(uVar6 + 1) * uVar7,(uVar8 - uVar6) * uVar7);
              goto joined_r0x4812d2da;
            }
          }
          iVar3 = thunk_FUN_ram_4ff20684();
          if (iVar3 != 0) {
            uVar5 = (uint)*(byte *)(piVar2 + 6);
            if (uVar5 != 0) {
              uVar6 = 0x10 - uVar5;
              if (param_3 < 0x10 - uVar5) {
                uVar6 = param_3;
              }
              __s = piVar2 + 7;
              FUN_ram_4ff45158(uVar5 + (int)__s,param_2,uVar6);
              bVar1 = *(byte *)(piVar2 + 6);
              *(char *)(piVar2 + 6) = (char)(bVar1 + uVar6);
              if ((bVar1 + uVar6 & 0xff) != 0x10) goto LAB_ram_4812d382;
              iVar3 = FUN_ram_4812e4d6(piVar2[1],piVar2[5],__s,0x10);
              if (iVar3 != 0) {
                return iVar3;
              }
              memset(__s,0xff,0x10);
              param_2 = (short *)((int)param_2 + uVar6);
              param_3 = param_3 - uVar6;
              piVar2[5] = piVar2[5] + 0x10;
            }
            uVar5 = param_3 & 0xf;
            *(char *)(piVar2 + 6) = (char)uVar5;
            if (uVar5 != 0) {
              param_3 = param_3 - uVar5;
              FUN_ram_4ff45158(piVar2 + 7,(char *)((int)param_2 + param_3));
            }
          }
          iVar3 = FUN_ram_4812e4d6(piVar2[1],piVar2[5],param_2,param_3);
          if (iVar3 != 0) {
            return iVar3;
          }
          piVar2[5] = piVar2[5] + param_3;
          return 0;
        }
      }
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_ota_ops","E (%lu) %s: not found the handle\n",uVar4,"esp_ota_ops");
      iVar3 = 0x102;
    }
  }
  return iVar3;
}


