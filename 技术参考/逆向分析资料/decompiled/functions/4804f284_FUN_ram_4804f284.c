/* Firmware entry: 0x4804f284 */

undefined4 FUN_ram_4804f284(uint *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = (byte)param_1[0x18];
  uVar7 = (uint)bVar1;
  param_2 = param_2 & 0x7ff;
  if (uVar7 == 0) {
    uVar6 = 0;
    cVar3 = '\x01';
  }
  else {
    uVar6 = 0;
    puVar5 = param_1;
    do {
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      if (param_2 <= uVar4) {
        if (uVar6 < uVar7) {
          if (param_1[uVar6] == param_2) {
            return 1;
          }
          if (0x17 < uVar7) {
            return 0;
          }
          uVar4 = uVar7 - uVar6 & 0xff;
          iVar2 = -(uVar4 - 1 & 0xff);
          cVar3 = bVar1 + 1;
          FUN_ram_4ff4522c(param_1 + iVar2 + uVar7,param_1 + (uVar7 - 1) + iVar2,uVar4 << 2);
          goto LAB_ram_4804f304;
        }
        break;
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 != uVar7);
    if (0x17 < uVar7) {
      return 0;
    }
    cVar3 = bVar1 + 1;
  }
LAB_ram_4804f304:
  param_1[uVar6] = param_2;
  *(char *)(param_1 + 0x18) = cVar3;
  return 1;
}


