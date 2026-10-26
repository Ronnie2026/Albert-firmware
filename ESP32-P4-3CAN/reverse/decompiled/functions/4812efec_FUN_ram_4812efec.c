/* Firmware entry: 0x4812efec */

int FUN_ram_4812efec(uint *param_1,int param_2,int param_3,uint *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puStack_4c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = *param_1;
  uVar15 = uVar8 + param_1[0x37];
  uVar16 = uVar15;
  if (*(char *)((int)param_1 + 5) != '\0') {
    puStack_4c = param_1 + 0x27;
    puVar13 = param_1 + 7;
    iVar12 = 0;
    do {
      iVar4 = FUN_ram_4812edc2(uVar16,puVar13,8,1);
      if (iVar4 != 0) {
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_image","E (%lu) %s: bootloader_flash_read failed at 0x%08lx\n",uVar5
                         ,"esp_image",uVar16);
        return iVar4;
      }
      if (param_3 != 0) {
        FUN_ram_4812f8f8(param_3,puVar13,8);
      }
      uVar8 = puVar13[1];
      uVar16 = uVar16 + 8;
      if ((uVar8 & 3) != 0) {
        if (param_2 != 0) {
          return 0x2002;
        }
        uVar5 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_image","E (%lu) %s: invalid segment length 0x%lx\n",uVar5,
                         "esp_image",param_1[iVar12 * 2 + 8]);
        return 0x2002;
      }
      uVar3 = *puVar13;
      param_1[0x41] = 0x10000;
      if ((uVar3 & 0xf4000000) == 0x40000000) {
        if (((uVar3 ^ uVar16) & 0xffff) != 0) {
          if (param_2 != 0) {
            return 0x2002;
          }
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp_image",
                           "E (%lu) %s: Segment %d load address 0x%08lx, doesn\'t match data 0x%08lx\n"
                           ,uVar5,"esp_image",iVar12,uVar3,uVar16);
          return 0x2002;
        }
        if (param_2 == 0) {
          uVar5 = FUN_ram_4ff44d14();
          pcVar9 = "map";
LAB_ram_4812f09c:
          FUN_ram_4ff44bf0(3,"esp_image",
                           "I (%lu) %s: segment %d: paddr=%08lx vaddr=%08x size=%05lxh (%6lu) %s\n",
                           uVar5,"esp_image",iVar12,uVar16,uVar3,uVar8,uVar8,pcVar9);
        }
      }
      else if (param_2 == 0) {
        uVar5 = FUN_ram_4ff44d14();
        pcVar9 = "";
        goto LAB_ram_4812f09c;
      }
      uVar3 = FUN_ram_4812ecda();
      if (uVar8 != 0) {
        bVar1 = true;
        uVar11 = uVar16;
        do {
          uVar10 = (uint)((uVar11 & 0xffff) != 0);
          if (uVar3 <= uVar10) {
LAB_ram_4812f2ac:
            uVar5 = FUN_ram_4ff44d14();
            FUN_ram_4ff44bf0(1,"esp_image","E (%lu) %s: No free MMU pages are available\n",uVar5,
                             "esp_image");
            return 0x101;
          }
          uVar10 = uVar3 - uVar10;
          bVar2 = bVar1;
          if (uVar10 >> 0x10 == 0) goto LAB_ram_4812f212;
          uVar17 = uVar8;
          if (param_4 == (uint *)0x0) break;
LAB_ram_4812f0f6:
          while( true ) {
            puVar6 = (uint *)FUN_ram_4812ece0(uVar11,uVar17);
            if (puVar6 == (uint *)0x0) {
              uVar5 = FUN_ram_4ff44d14();
              FUN_ram_4ff44bf0(1,"esp_image","E (%lu) %s: bootloader_mmap(0x%lx, 0x%lx) failed\n",
                               uVar5,"esp_image",uVar11,uVar17);
              return -1;
            }
            if (((((iVar12 == 0) && (bVar1)) && (uVar10 = *param_1, uVar10 != 0x2000)) &&
                (uVar10 != DAT_ram_4ff47f0c)) &&
               (((iVar4 = FUN_ram_48001a20(), iVar4 == 0 ||
                 (uVar7 = FUN_ram_480019d8(), uVar10 != uVar7)) &&
                (iVar4 = FUN_ram_4812eb0c((short)puVar6[0x2c],*(undefined2 *)((int)puVar6 + 0xb2)),
                iVar4 != 0)))) {
              FUN_ram_4812ed94(puVar6);
              return iVar4;
            }
            if (uVar17 != 0) break;
            FUN_ram_4812ed94(puVar6);
            uVar10 = (uint)((uVar11 & 0xffff) != 0);
            if (uVar3 <= uVar10) goto LAB_ram_4812f2ac;
            uVar10 = uVar3 - uVar10;
            bVar1 = false;
            uVar17 = uVar8;
            bVar2 = false;
            if (uVar10 >> 0x10 == 0) goto LAB_ram_4812f212;
          }
          uVar10 = 0;
          puVar14 = puVar6;
          do {
            *param_4 = *param_4 ^ *puVar14;
            if ((param_3 != 0) && ((uVar10 & 0x3ff) == 0)) {
              uVar7 = uVar17 - uVar10;
              if (0x400 < uVar7) {
                uVar7 = 0x400;
              }
              FUN_ram_4812f8f8(param_3,puVar14,uVar7);
            }
            puVar14 = puVar14 + 1;
            uVar10 = uVar10 + 4;
          } while (uVar10 < uVar17);
          FUN_ram_4812ed94(puVar6);
LAB_ram_4812f15a:
          uVar8 = uVar8 - uVar17;
          uVar11 = uVar11 + uVar17;
          bVar1 = false;
          if (uVar8 == 0) break;
        } while( true );
      }
      iVar12 = iVar12 + 1;
      *puStack_4c = uVar16;
      puStack_4c = puStack_4c + 1;
      uVar16 = uVar16 + puVar13[1];
      puVar13 = puVar13 + 2;
    } while (iVar12 < (int)(uint)*(byte *)((int)param_1 + 5));
    uVar8 = *param_1;
  }
  if (uVar16 < uVar8) {
    if (param_2 == 0) {
      uVar5 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_image","E (%lu) %s: image offset has wrapped\n",uVar5,"esp_image");
    }
    return 0x2002;
  }
  param_1[0x37] = (param_1[0x37] - uVar15) + uVar16;
  return 0;
LAB_ram_4812f212:
  bVar1 = bVar2;
  uVar17 = uVar10 * 0x10000;
  if (uVar8 < uVar10 * 0x10000) {
    uVar17 = uVar8;
  }
  if (param_4 == (uint *)0x0) goto LAB_ram_4812f15a;
  goto LAB_ram_4812f0f6;
}


