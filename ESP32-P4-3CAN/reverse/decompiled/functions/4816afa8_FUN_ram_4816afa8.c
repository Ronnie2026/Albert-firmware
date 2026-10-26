/* Firmware entry: 0x4816afa8 */

undefined4 FUN_ram_4816afa8(int *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 <= param_3) && (1 < (int)param_3 - (int)param_2)) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    memset((void *)(param_1[0x10] + 0x24),0,0x28);
    if ((param_2 <= param_3) &&
       (uVar5 = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8),
       uVar5 <= (uint)((int)param_3 - (int)param_2))) {
      puVar6 = (ushort *)(uVar5 + (int)param_2);
      if (param_2 < puVar6) {
        uVar5 = 0;
        do {
          if ((int)puVar6 - (int)param_2 == 1) goto LAB_ram_4816afca;
          uVar1 = *param_2;
          uVar3 = (uint)uVar1 << 8;
          uVar2 = uVar1 >> 8;
          param_2 = param_2 + 1;
          if (param_1[4] == 0x303) {
            if ((((uVar1 & 0xff) - 1 < 6) && ((uVar2 & 0xfd) == 1)) &&
               (puVar4 = *(ushort **)(*param_1 + 0x60), puVar4 != (ushort *)0x0)) {
              do {
                uVar1 = *puVar4;
                if (uVar1 == 0) goto LAB_ram_4816b07c;
                puVar4 = puVar4 + 1;
              } while ((uVar3 & 0xffff | (uint)uVar2) != (uint)uVar1);
              goto LAB_ram_4816b064;
            }
          }
          else {
LAB_ram_4816b064:
            if (uVar5 + 1 < 0x14) {
              *(ushort *)(param_1[0x10] + uVar5 * 2 + 0x24) = (ushort)uVar3 | uVar2;
              uVar5 = uVar5 + 1;
            }
          }
LAB_ram_4816b07c:
        } while (param_2 < puVar6);
        if (param_3 == param_2) {
          if (uVar5 != 0) {
            *(undefined2 *)(uVar5 * 2 + param_1[0x10] + 0x24) = 0;
            return 0;
          }
LAB_ram_4816b0da:
          FUN_ram_481714f0(param_1,0x28,0xffff9200);
          return 0xffff9200;
        }
      }
      else if (param_3 == param_2) goto LAB_ram_4816b0da;
    }
  }
LAB_ram_4816afca:
  FUN_ram_481714f0(param_1,0x32,0xffff8d00);
  return 0xffff8d00;
}


